/*
 * LevelDetector.h
 *
 *  Created on: 18 dic. 2023
 *      Author: acustica
 */

#ifndef LEVELDETECTOR_H_
#define LEVELDETECTOR_H_

#include <stdint.h>
#include "audio_processing/audio_elements/biquad_filter.h"

class LevelDetector {
//private:
public:
	BIQUAD_FILTER lp_filter;
	float last_abs;
	float last_env;
//public:
	LevelDetector(float audio_sample_rate, float pm * sos_coeffs);
	virtual ~LevelDetector();
	float get_level(float* audio_in, uint32_t audio_block_size);
};

#endif /* LEVELDETECTOR_H_ */
