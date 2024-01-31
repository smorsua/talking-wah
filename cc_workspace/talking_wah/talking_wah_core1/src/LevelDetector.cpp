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

LevelDetector::LevelDetector(float audio_sample_rate) {
	this->lp_filter_coeffs = new pm float[8];
	this->lp_filter_coeffs[0] = -0.997812677410834;
	this->lp_filter_coeffs[1] = 1.99781125533812;
	this->lp_filter_coeffs[2] = 1.00000000000000;
	this->lp_filter_coeffs[3] = -1.99989469957271;
	this->lp_filter_coeffs[4] = -0.999148930694631;
	this->lp_filter_coeffs[5] = 1.99914759486959;
	this->lp_filter_coeffs[6] = 1.00000000000000;
	this->lp_filter_coeffs[7] = -1.99998193290891;
	this->lp_filter = IIRFilter(this->lp_filter_coeffs, 0.0009985113763346265, 2);
}

LevelDetector::~LevelDetector() {
	delete[] this->lp_filter_coeffs;
}

float LevelDetector::get_level(float* audio_in, uint32_t audio_block_size) {
	// Absolute value
	float* audio_in_abs = new float[audio_block_size];
	for(int i = 0; i < audio_block_size; i++) {
		audio_in_abs[i] = abs(audio_in[i]);
	}

	// Low pass filter
	float* env = new float[audio_block_size];
	this->lp_filter.filter(audio_in_abs, env, audio_block_size);

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

