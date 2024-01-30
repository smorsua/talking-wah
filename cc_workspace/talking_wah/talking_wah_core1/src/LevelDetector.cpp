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
#include <filter.h>
#define LEVEL_CUTOFF_FREQ (30)
#define LEVEL_Q (5)



LevelDetector::LevelDetector(float pm * sos_coeffs, float* sos_state, float audio_sample_rate):
last_abs(0),
last_env(0),
lp_filter(sos_coeffs, sos_state, 0.0009985113763346265, 2) {
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
	this->lp_filter.filter(audio_in_abs, env, audio_block_size);
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

