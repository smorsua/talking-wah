/*
 * peak_filter.cpp
 *
 *  Created on: 4 dic. 2023
 *      Author: acustica
 */

#include "peak_filter.hpp"
#include "audio_elements_common.h"
#include "biquad_filter.h"
#include "math.h"
#include <filter.h>
#include <stdint.h>

static void convert_coeffs(float * coeffs_ab, float * sos_coeffs,
		float * scaling_factor);

static void filter_generate_coeffs(float freq, float q,
		float audio_sample_rate, float * result);

void peak_filter_setup(PEAK_FILTER* f, float freq, float q, float audio_sample_rate) {
	float w0 = 2*PI*freq/audio_sample_rate;
	float bw = 2*PI*(freq/q)/audio_sample_rate;
	float Gb = 0.5;

	float beta = Gb/sqrtf(1-Gb^2)*tanf(bw/2);
	float b_param = 1/(1+beta);

	float coeffs_ab[6] = {1, -2*b_param*cosf(w0), 2*b_param-1, 1-b_param, 0, -(1-b_param)};
	filter_generate_coeffs(freq, q, audio_sample_rate, coeffs_ab);
	convert_coeffs(coeffs_ab, f->sos_coeffs, &f->scaling_factor);

	f->audio_sample_rate = audio_sample_rate;
	f->freq = freq;
	f->q = q;
}

void peak_filter_read(PEAK_FILTER* f, float* audio_in, float* audio_out,
		uint32_t audio_block_size){
		// Process iir filter
		iir(audio_in, audio_out, f->sos_coeffs, f->sos_state, audio_block_size, 1);
}

static void filter_generate_coeffs(float freq, float q,
		float audio_sample_rate, float * result) {
		float w0 = 2*PI*freq/audio_sample_rate;
		float bw = 2*PI*(freq/q)/audio_sample_rate;
		float Gb = 0.5;
		float beta = Gb/sqrtf(1-Gb^2)*tanf(bw/2);
		float b_param = 1/(1+beta);

		result[0] = 1;
		result[1] = -2*b_param*cosf(w0);
		result[2] = 2*b_param-1;
		result[3] = 1-b_param;
		result[4] = 0;
		result[5] = -(1-b_param);
}

#define COEFF_B0    (0)
#define COEFF_B1    (1)
#define COEFF_B2    (2)
#define COEFF_A0    (3)
#define COEFF_A1    (4)
#define COEFF_A2    (5)

/**
 * @brief Convert our A and B coefficients into the format required by the
 * CCES iir() routine.
 *
 * @param coeffs_ab Coefficients in A/B format
 * @param sos_coeffs Coefficients scaled/negated/reversed for CCES routine
 * @param scaling_factor Scaling factor
 * @return Result enum - see .h file for details
 */
static void convert_coeffs(float * coeffs_ab, float * sos_coeffs,
		float * scaling_factor) {

	coeffs_ab[COEFF_B1] = coeffs_ab[COEFF_B1] / coeffs_ab[COEFF_B0];
	coeffs_ab[COEFF_B2] = coeffs_ab[COEFF_B2] / coeffs_ab[COEFF_B0];

	coeffs_ab[COEFF_A1] = -coeffs_ab[COEFF_A1] / coeffs_ab[COEFF_A0];
	coeffs_ab[COEFF_A2] = -coeffs_ab[COEFF_A2] / coeffs_ab[COEFF_A0];

	sos_coeffs[0] = coeffs_ab[COEFF_A2];
	sos_coeffs[1] = coeffs_ab[COEFF_A1];
	sos_coeffs[2] = coeffs_ab[COEFF_B2];
	sos_coeffs[3] = coeffs_ab[COEFF_B1];

	(*scaling_factor) = coeffs_ab[COEFF_B0];

}
