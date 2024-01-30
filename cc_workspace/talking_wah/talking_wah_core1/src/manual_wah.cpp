/*
 * manual_wah.cpp
 *
 *  Created on: 30 ene. 2024
 *      Author: acustica
 */

//#include "audio_processing/audio_elements/audio_elements_common.h"
//#include "peak_filter.h"
//#include <filter.h>
//#include "common/audio_system_config.h"
//
//float map_value(float val, float r1[2], float r2[2]) {
//	float relative_offset = (val - r1[0]) / (r1[1] - r1[0]);
//	return relative_offset * (r2[1] - r2[0]) + r2[0];
//}
//
//PEAK_FILTER peak_filter;
//float pm sos_coeffs[4];
//float wah_pulse;
//float wah_t_inc;
//void manual_wah_setup(void) {
//	// Setup filter
//	peak_filter_setup(&peak_filter,
//			200,
//			5,
//			AUDIO_SAMPLE_RATE,
//			sos_coeffs);
//
//	// Setup filter modification
//	float wah_freq = 2.5;
//	wah_pulse = 2*PI*wah_freq;
//	wah_t_inc = (float)AUDIO_BLOCK_SIZE / (float)AUDIO_SAMPLE_RATE;
//}

// Init pushbuttons
//	gpio_setup(GPIO_SHARC_SAM_PB1 , GPIO_INPUT);
//	gpio_attach_interrupt(GPIO_SHARC_SAM_PB1, toggle_save_level, GPIO_FALLING, 0);
//
//	A_coeffs[0].a0 = 1;
//	A_coeffs[0].a1 = -1.81534108270456817635363222507294267416;
//	A_coeffs[0].a2 = 0.831005589346757611579619151598308235407;
//
//	B_coeffs[0].b0 = 1;
//	B_coeffs[0].b1 = 2;
//	B_coeffs[0].b2 = 1;
//
//	float a0,a1,a2;
//	float b0,b1,b2;
//
//	for (int i = 0; i < SECTIONS; i++) {
//		a0 = A_coeffs[i].a0;
//		a1 = A_coeffs[i].a1;
//		a2 = A_coeffs[i].a2;
//		coeffs[(i*4) + 0] = (a2/a0);
//		coeffs[(i*4) + 1] = (a1/a0);
//		b0 = B_coeffs[i].b0;
//		b1 = B_coeffs[i].b1;
//		b2 = B_coeffs[i].b2;
//		coeffs[(i*4) + 2] = (b2/b0);
//		coeffs[(i*4) + 3] = (b1/b0);
//		scale = scale * (b0/a0);
//	}


