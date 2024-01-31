/*
 * AutoWah.cpp
 *
 *  Created on: 18 dic. 2023
 *      Author: acustica
 */

#include <talking_wah_core1/src/AutoWah.h>

#define AUTOWAH_MIN_FREQ (200)
#define AUTOWAH_MAX_FREQ (1000)
#define AUTOWAH_MIN_LEVEL (0)
#define AUTOWAH_MAX_LEVEL (0.18)

#define AUTOWAH_Q (6)

AutoWah::AutoWah(float audio_sample_rate): level_detector(audio_sample_rate), last_level(0) {
	this->peak_filter_coeffs = new float pm[4]; // 4*SECTIONS
	peak_filter_setup(&this->peak_filter,
			AUTOWAH_MAX_FREQ,
			AUTOWAH_Q,
			3,
			audio_sample_rate,
			this->peak_filter_coeffs);
}

AutoWah::~AutoWah() {
	delete[] this->peak_filter_coeffs;
}

void AutoWah::filter(float* audio_in, float* audio_out, uint32_t audio_block_size) {
	float level = this->level_detector.get_level(audio_in, audio_block_size);
	this->last_level = level;
	float peak_freq = (level - AUTOWAH_MIN_LEVEL) * ((AUTOWAH_MAX_FREQ - AUTOWAH_MIN_FREQ) / (AUTOWAH_MAX_LEVEL - AUTOWAH_MIN_LEVEL)) + AUTOWAH_MIN_FREQ;
	peak_filter_modify_freq(&this->peak_filter, peak_freq);
    peak_filter_read(&this->peak_filter, audio_in, audio_out, audio_block_size);
}

