/*
 * peak_filter.hpp
 *
 *  Created on: 4 dic. 2023
 *      Author: acustica
 */

#ifndef PEAK_FILTER_HPP_
#define PEAK_FILTER_HPP_

#include <stdint.h>

typedef struct {
	float audio_sample_rate;
	float freq;
	float q;
	float sos_coeffs[3];
	float sos_state[3];
	float scaling_factor;
} PEAK_FILTER;

void peak_filter_setup(PEAK_FILTER* f, float freq, float q, float audio_sample_rate);
void peak_filter_read(PEAK_FILTER* f, float* audio_in, float* audio_out,
		uint32_t audio_block_size);
void peak_filter_modify_freq(PEAK_FILTER* f, float new_freq);
void peak_filter_modify_q(PEAK_FILTER* f, float new_q);
#endif /* PEAK_FILTER_HPP_ */