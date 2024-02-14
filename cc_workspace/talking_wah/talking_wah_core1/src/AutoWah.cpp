/*
 * AutoWah.cpp
 *
 *  Created on: 18 dic. 2023
 *      Author: acustica
 */

#include <talking_wah_core1/src/AutoWah.h>
#include "math.h"

#define AUTOWAH_MIN_FREQ (300)
#define AUTOWAH_MAX_FREQ (1100)
#define AUTOWAH_MIN_LEVEL (0.0001)
#define AUTOWAH_MAX_LEVEL (0.1)
#define AUTOWAH_MIN_LEVEL_LOG (1.000230285)
#define AUTOWAH_MAX_LEVEL_LOG (1.258925412)
#define AUTOWAH_Q (12)

AutoWah::AutoWah(float audio_sample_rate,  pm float * peak_filter_coeffs, pm float * lp_filter_coeffs):
				level_detector(audio_sample_rate, lp_filter_coeffs),
				last_level(0) {

	peak_filter_setup(&this->peak_filter,
			AUTOWAH_MAX_FREQ,
			AUTOWAH_Q,
			6,
			audio_sample_rate,
			peak_filter_coeffs);

	filter_setup(
			&this->lp_filter,
			BIQUAD_TYPE_LPF,
			BIQUAD_TRANS_VERY_FAST,
			peak_filter_coeffs,
			AUTOWAH_MIN_FREQ,
			AUTOWAH_Q,
			-10,
			audio_sample_rate);
}

AutoWah::~AutoWah() {}

float AutoWah::filter(float* audio_in, float* audio_out, uint32_t audio_block_size) {
	float level = this->level_detector.get_level(audio_in, audio_block_size);
	this->last_level = level;
	if(level < AUTOWAH_MIN_LEVEL) {
		level = AUTOWAH_MIN_LEVEL;
	} else if(level > AUTOWAH_MAX_LEVEL) {
		level = AUTOWAH_MAX_LEVEL;
	}

	float level_log = powf(10, level);
	float peak_freq = (level_log - AUTOWAH_MIN_LEVEL_LOG) * ((AUTOWAH_MAX_FREQ - AUTOWAH_MIN_FREQ) / (AUTOWAH_MAX_LEVEL_LOG - AUTOWAH_MIN_LEVEL_LOG)) + AUTOWAH_MIN_FREQ;
	peak_filter_modify_freq(&this->peak_filter, peak_freq);
    peak_filter_read(&this->peak_filter, audio_in, audio_out, audio_block_size);
	//filter_modify_freq(&this->lp_filter, peak_freq);
	//filter_read(&this->lp_filter, audio_in, audio_out, audio_block_size);
    return peak_freq;
}

