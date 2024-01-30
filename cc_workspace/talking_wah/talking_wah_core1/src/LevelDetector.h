/*
 * LevelDetector.h
 *
 *  Created on: 18 dic. 2023
 *      Author: acustica
 */

#ifndef LEVELDETECTOR_H_
#define LEVELDETECTOR_H_

#include <stdint.h>
#include "IIRFilter.h"

class LevelDetector {
//private:
public:
	IIRFilter lp_filter;
	float last_abs;
	float last_env;
//public:
	LevelDetector(float pm * sos_coeff, float* sos_state, float audio_sample_rate);
	virtual ~LevelDetector();
	float get_level(float* audio_in, uint32_t audio_block_size);
};

#endif /* LEVELDETECTOR_H_ */
