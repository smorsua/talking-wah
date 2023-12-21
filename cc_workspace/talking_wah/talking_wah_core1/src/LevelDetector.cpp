/*
 * LevelDetector.cpp
 *
 *  Created on: 18 dic. 2023
 *      Author: acustica
 */
#include <stdint.h>
#include <math.h>
#include "audio_processing/audio_elements/biquad_filter.h"
#include "LevelDetector.h"

#define LEVEL_CUTOFF_FREQ (30)
#define LEVEL_Q (5)

LevelDetector::LevelDetector(float audio_sample_rate, float pm * sos_coeffs): last_abs(0), last_env(0) {
	filter_setup(&this->lp_filter,
			BIQUAD_TYPE_LPF,
			BIQUAD_TRANS_VERY_FAST,
			sos_coeffs,
			LEVEL_CUTOFF_FREQ,
			LEVEL_Q,
			0, audio_sample_rate);
}

LevelDetector::~LevelDetector() {
	// TODO Auto-generated destructor stub
}

float LevelDetector::get_level(float* audio_in, uint32_t audio_block_size) {
	// Absolute value
	float* audio_in_abs = new float[audio_block_size];
	for(int i = 0; i < audio_block_size; i++) {
		audio_in_abs[i] = abs(audio_in[i]);
	}
	this->last_abs = audio_in_abs[0];

	// Low pass filter
	float* env = new float[audio_block_size];
	filter_read(&this->lp_filter, audio_in_abs, env, audio_block_size);
	this->last_env = env[0];
	// The maximum of the envelope is taken as the level value
	float env_max = 0; // All elements in env_abs are positive
	for(int i = 0; i < audio_block_size; i++) {
		if(env[i] > env_max) {
			env_max = env[i];
		}
	}

	delete[] audio_in_abs;
	delete[] env;

	return env_max;
}

