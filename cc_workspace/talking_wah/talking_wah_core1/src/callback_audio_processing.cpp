/*
 * Copyright (c) 2018-2019 Analog Devices, Inc.  All rights reserved.
 *
 * These are the hooks for the audio processing functions.
 *
 */

#include <audio_processing/audio_effects_selector.h>
#include <math.h>

// Define your audio system parameters in this file
#include "common/audio_system_config.h"

// Support for simple multi-core data sharing
#include "common/multicore_shared_memory.h"

// Variables related to the audio framework that is currently selected (e.g. input and output buffers)
#include "audio_framework_selector.h"

// Includes all header files for effects and calls for effect selector
#include "audio_processing/audio_effects_selector.h"

// Prototypes for this file
#include "callback_audio_processing.h"

#include <math.h>
#include <talking_wah_core1/src/peak_filter.h>

/*
 * Place any initialization code here for the audio processing
 */
#include "audio_processing/audio_elements/audio_elements_common.h"
#include "AutoWah.h"
#include "drivers/bm_uart_driver/bm_uart.h"
#include "drivers/bm_gpio_driver/bm_gpio.h"
#include "IIRFilter.h"
#include <filter.h>

float map_value(float val, float r1[2], float r2[2]) {
	float relative_offset = (val - r1[0]) / (r1[1] - r1[0]);
	return relative_offset * (r2[1] - r2[0]) + r2[0];
}

PEAK_FILTER peak_filter;
float pm sos_coeffs[4];
float wah_pulse;
float wah_t_inc;
void manual_wah_setup(void) {
	// Setup filter
	peak_filter_setup(&peak_filter,
			200,
			5,
			AUDIO_SAMPLE_RATE,
			sos_coeffs);

	// Setup filter modification
	float wah_freq = 2.5;
	wah_pulse = 2*PI*wah_freq;
	wah_t_inc = (float)AUDIO_BLOCK_SIZE / (float)AUDIO_SAMPLE_RATE;
}

float wah_range[2] = {0.1, 10};
float norm_range[2] = {0, 1};
float freq_range[2] = {200, 1000};
float counter = 0;
void manual_wah(float* audio_in, float* audio_out, uint32_t audio_block_size) {
	// Modify filter
	float wah_amount = powf(10, cosf(wah_pulse*counter*wah_t_inc));
	wah_amount = map_value(wah_amount, wah_range, norm_range);
	float new_freq = map_value(wah_amount, norm_range, freq_range);
	peak_filter_modify_freq(&peak_filter, new_freq);
	counter++;

	// Apply filter
	peak_filter_read(&peak_filter,
			audio_in,
			audio_out,
			AUDIO_BLOCK_SIZE);
}


bool save_level = false;
void toggle_save_level(void*) {
	save_level = true;
}

#define SECTIONS (1)
float pm coeffs[4*SECTIONS];
float state[2*SECTIONS + 1];

struct {
 float a0;
 float a1;
 float a2;
} A_coeffs[SECTIONS];

struct {
 float b0;
 float b1;
 float b2;
} B_coeffs[SECTIONS];

float scale = 1.0;

void processaudio_setup(void) {
	// Initialize the audio effects in the audio_processing/ folder
	audio_effects_setup_core1();

	// *******************************************************************************
	// Add any custom setup code here
	// *******************************************************************************

	// Init pushbuttons
	gpio_setup(GPIO_SHARC_SAM_PB1 , GPIO_INPUT);
	gpio_attach_interrupt(GPIO_SHARC_SAM_PB1, toggle_save_level, GPIO_FALLING, 0);

	A_coeffs[0].a0 = 1;
	A_coeffs[0].a1 = -1.81534108270456817635363222507294267416;
	A_coeffs[0].a2 = 0.831005589346757611579619151598308235407;

	B_coeffs[0].b0 = 1;
	B_coeffs[0].b1 = 2;
	B_coeffs[0].b2 = 1;

	float a0,a1,a2;
	float b0,b1,b2;

	for (int i = 0; i < SECTIONS; i++) {
		a0 = A_coeffs[i].a0;
		a1 = A_coeffs[i].a1;
		a2 = A_coeffs[i].a2;
		coeffs[(i*4) + 0] = (a2/a0);
		coeffs[(i*4) + 1] = (a1/a0);
		b0 = B_coeffs[i].b0;
		b1 = B_coeffs[i].b1;
		b2 = B_coeffs[i].b2;
		coeffs[(i*4) + 2] = (b2/b0);
		coeffs[(i*4) + 3] = (b1/b0);
		scale = scale * (b0/a0);
	}


}

//IIRFilter my_filter(coeffs, scale, SECTIONS, sos_state);


#pragma optimize_for_speed
void processaudio_callback(void) {
	iir(audiochannel_0_left_in, audiochannel_0_left_out, coeffs, state, AUDIO_BLOCK_SIZE, SECTIONS);

	for(int i = 0; i < AUDIO_BLOCK_SIZE; i++) {
		audiochannel_0_left_out[i] = audiochannel_0_left_out[i] * scale;
		audiochannel_0_right_out[i] = audiochannel_0_right_in[i];
	}
}

#if (USE_BOTH_CORES_TO_PROCESS_AUDIO)

/*
 * When using a dual core configuration, SHARC Core 1 is responsible for routing the
 * processed audio from SHARC Core 2 to the various output buffers for the
 * devices connected to the SC589.  For example, in a dual core framework, SHARC Core 1
 * may pass 8 channels of audio to Core 2, and then receive 8 channels of processed audio
 * back from Core 2.  It is this routine where we route these channels to the ADAU1761,
 * the A2B bus, SPDIF, etc.
 */
//#pragma optimize_for_speed
void processaudio_output_routing(void) {

	static float t = 0;

	for (int i = 0; i < AUDIO_BLOCK_SIZE; i++) {

		// If automotive board is attached, send all 16 channels from core 2 to the DACs
#if defined(AUDIO_FRAMEWORK_16CH_SAM_AND_AUTOMOTIVE_FIN) && AUDIO_FRAMEWORK_16CH_SAM_AND_AUTOMOTIVE_FIN

		// Copy 16 channels from Core 2 to the DACs on the automotive board
		audiochannel_automotive_0_left_out[i] = audiochannel_from_sharc_core2_0_left[i];
		audiochannel_automotive_0_right_out[i] = audiochannel_from_sharc_core2_0_right[i];
		audiochannel_automotive_1_left_out[i] = audiochannel_from_sharc_core2_1_left[i];
		audiochannel_automotive_1_right_out[i] = audiochannel_from_sharc_core2_1_right[i];
		audiochannel_automotive_2_left_out[i] = audiochannel_from_sharc_core2_2_left[i];
		audiochannel_automotive_2_right_out[i] = audiochannel_from_sharc_core2_2_right[i];
		audiochannel_automotive_3_left_out[i] = audiochannel_from_sharc_core2_3_left[i];
		audiochannel_automotive_3_right_out[i] = audiochannel_from_sharc_core2_3_right[i];
		audiochannel_automotive_4_left_out[i] = audiochannel_from_sharc_core2_4_left[i];
		audiochannel_automotive_4_right_out[i] = audiochannel_from_sharc_core2_4_right[i];
		audiochannel_automotive_5_left_out[i] = audiochannel_from_sharc_core2_5_left[i];
		audiochannel_automotive_5_right_out[i] = audiochannel_from_sharc_core2_5_right[i];
		audiochannel_automotive_6_left_out[i] = audiochannel_from_sharc_core2_6_left[i];
		audiochannel_automotive_6_right_out[i] = audiochannel_from_sharc_core2_6_right[i];
		audiochannel_automotive_7_left_out[i] = audiochannel_from_sharc_core2_7_left[i];
		audiochannel_automotive_7_right_out[i] = audiochannel_from_sharc_core2_7_right[i];

#else

		// If A2B enabled, route audio down the A2B bus
#if (ENABLE_A2B)

		// Send all 8 channels from core 2 down the A2B bus
		audiochannel_a2b_0_left_out[i] = audiochannel_from_sharc_core2_0_left[i];
		audiochannel_a2b_0_right_out[i] = audiochannel_from_sharc_core2_0_right[i];
		audiochannel_a2b_1_left_out[i] = audiochannel_from_sharc_core2_1_left[i];
		audiochannel_a2b_1_right_out[i] = audiochannel_from_sharc_core2_1_right[i];
		audiochannel_a2b_2_left_out[i] = audiochannel_from_sharc_core2_2_left[i];
		audiochannel_a2b_2_right_out[i] = audiochannel_from_sharc_core2_2_right[i];
		audiochannel_a2b_3_left_out[i] = audiochannel_from_sharc_core2_3_left[i];
		audiochannel_a2b_3_right_out[i] = audiochannel_from_sharc_core2_3_right[i];

#endif

		// Send Audio from SHARC Core 2 out to the DACs (1/8" audio out connector)
		audiochannel_adau1761_0_left_out[i] =
				audiochannel_from_sharc_core2_0_left[i];
		audiochannel_adau1761_0_right_out[i] =
				audiochannel_from_sharc_core2_0_right[i];

		// Send audio from SHARC Core 2 to the SPDIF transmitter as well
		audiochannel_spdif_0_left_out[i] =
				audiochannel_from_sharc_core2_0_left[i];
		audiochannel_spdif_0_right_out[i] =
				audiochannel_from_sharc_core2_0_right[i];
#endif
	}
}
#endif



/*
 * This loop function is like a thread with a low priority.  This is good place to process
 * large FFTs in the background without interrupting the audio processing callback.
 */
void processaudio_background_loop(void) {

	// *******************************************************************************
	// Add any custom background processing here
	// *******************************************************************************

}

/*
 * This function is called if the code in the audio processing callback takes too long
 * to complete (essentially exceeding the available computational resources of this core).
 */
void processaudio_mips_overflow(void) {
}
