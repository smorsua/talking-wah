/*
 * AutoWah.h
 *
 *  Created on: 18 dic. 2023
 *      Author: acustica
 */

#ifndef AUTOWAH_H_
#define AUTOWAH_H_

#include <stdint.h>
#include "LevelDetector.h"
#include "peak_filter.h"

class AutoWah {
//private:
public:
	LevelDetector level_detector;

	PEAK_FILTER peak_filter;
	float sos_state[3];
//public:
	AutoWah(float pm * sos_coeffs, float* sos_state, float audio_sample_rate);
	virtual ~AutoWah();
	void filter(float* audio_in, float* audio_out, uint32_t audio_block_size);
	float last_level;
};

#endif /* AUTOWAH_H_ */
