/*
 * peak_filter.cpp
 *
 *  Created on: 4 dic. 2023
 *      Author: acustica
 */

#include "audio_processing/audio_elements/audio_elements_common.h"
#include "audio_processing/audio_elements/biquad_filter.h"
#include "math.h"
#include <filter.h>
#include <stdint.h>
#include "peak_filter.h"

static void convert_coeffs(float * coeffs_ab, float pm * sos_coeffs,
		float * scaling_factor, float gain);

static void filter_generate_coeffs(float freq, float q,
		float audio_sample_rate, float * result);

void peak_filter_setup(PEAK_FILTER* f, float freq, float q, float gain, float audio_sample_rate, float pm * sos_coeffs) {
	f->sos_coeffs = sos_coeffs;
	f->audio_sample_rate = audio_sample_rate;
	f->freq = freq;
	f->q = q;
	f->gain = gain;
	float coeffs_ab[6];
	filter_generate_coeffs(freq, q, audio_sample_rate, coeffs_ab);
	convert_coeffs(coeffs_ab, f->sos_coeffs, &f->scaling_factor, f->gain);


	// Zero out filter state line
	for (int i = 0; i < 3; i++) {
		f->sos_state[i] = 0;
	}
}

void peak_filter_read(PEAK_FILTER* f, float* audio_in, float* audio_out,
		uint32_t audio_block_size){
		// Process iir filter
		iir(audio_in, audio_out, f->sos_coeffs, f->sos_state, audio_block_size, 1);

		// the CCES iir() routine requires that the output be scaled by the b[0] coeff
		for (int i = 0; i < audio_block_size; i++) {
			audio_out[i] *= f->scaling_factor;
		}
}

void peak_filter_modify_freq(PEAK_FILTER* f, float new_freq) {
	f->freq = new_freq;
	float coeffs_ab[6];
	filter_generate_coeffs(new_freq, f->q, f->audio_sample_rate, coeffs_ab);
	convert_coeffs(coeffs_ab, f->sos_coeffs, &f->scaling_factor, f->gain);
}

#define COEFF_B0    (0)
#define COEFF_B1    (1)
#define COEFF_B2    (2)
#define COEFF_A0    (3)
#define COEFF_A1    (4)
#define COEFF_A2    (5)

static void filter_generate_coeffs(float freq, float q,
		float audio_sample_rate, float * result) {
		float w0 = 2*PI*freq/audio_sample_rate;
		float bw = 2*PI*(freq/q)/audio_sample_rate;
		float Gb = 0.5;
		float beta = Gb/sqrtf(1-powf(Gb,2))*tanf(bw/2);
		float b_param = 1/(1+beta);

		result[COEFF_B0] = 1-b_param;
		result[COEFF_B1] = 0;
		result[COEFF_B2] = -(1-b_param);
		result[COEFF_A0] = 1;
		result[COEFF_A1] = -2*b_param*cosf(w0);
		result[COEFF_A2] = 2*b_param-1;
}


/**
 * @brief Convert our A and B coefficients into the format required by the
 * CCES iir() routine.
 *
 * @param coeffs_ab Coefficients in A/B format
 * @param sos_coeffs Coefficients scaled/negated/reversed for CCES routine
 * @param scaling_factor Scaling factor
 * @return Result enum - see .h file for details
 */
static void convert_coeffs(float * coeffs_ab, float pm * sos_coeffs,
		float * scaling_factor, float gain) {

	coeffs_ab[COEFF_B1] = coeffs_ab[COEFF_B1] / coeffs_ab[COEFF_B0];
	coeffs_ab[COEFF_B2] = coeffs_ab[COEFF_B2] / coeffs_ab[COEFF_B0];

	coeffs_ab[COEFF_A1] = -coeffs_ab[COEFF_A1] / coeffs_ab[COEFF_A0];
	coeffs_ab[COEFF_A2] = -coeffs_ab[COEFF_A2] / coeffs_ab[COEFF_A0];

	// CAMBIAR SOS_COEFFS DESDE peak_filter_modify_freq ES LO QUE CAUSA QUE LOS LEVEL DETECTOR
	// NO COINCIDAN
	sos_coeffs[0] = coeffs_ab[COEFF_A2];
	sos_coeffs[1] = coeffs_ab[COEFF_A1];
	sos_coeffs[2] = coeffs_ab[COEFF_B2];
	sos_coeffs[3] = coeffs_ab[COEFF_B1];

	(*scaling_factor) = coeffs_ab[COEFF_B0]*gain;
}
