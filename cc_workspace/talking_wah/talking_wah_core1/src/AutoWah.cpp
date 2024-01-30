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
#define AUTOWAH_MAX_LEVEL (0.08)

#define AUTOWAH_Q (5)

AutoWah::AutoWah(float pm * sos_coeffs, float* sos_state, float audio_sample_rate): level_detector(sos_coeffs, sos_state,audio_sample_rate) {
	this->last_level = 0;
	peak_filter_setup(&this->peak_filter,
			AUTOWAH_MAX_FREQ,
			AUTOWAH_Q,
			audio_sample_rate,
			sos_coeffs);
}

AutoWah::~AutoWah() {
	// TODO Auto-generated destructor stub
}

void AutoWah::filter(float* audio_in, float* audio_out, uint32_t audio_block_size) {
	float level = this->level_detector.get_level(audio_in, audio_block_size);
	this->last_level=level;
	float peak_freq = (level - AUTOWAH_MIN_LEVEL) * ((AUTOWAH_MAX_FREQ - AUTOWAH_MIN_FREQ) / (AUTOWAH_MAX_LEVEL - AUTOWAH_MIN_LEVEL)) + AUTOWAH_MIN_FREQ;
	peak_filter_modify_freq(&this->peak_filter, peak_freq);
	peak_filter_read(&this->peak_filter, audio_in, audio_out, audio_block_size);
}

