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
private:
	IIRFilter lp_filter;
	pm float * lp_filter_coeffs;
public:
	LevelDetector(float audio_sample_rate);
	virtual ~LevelDetector();
	float get_level(float* audio_in, uint32_t audio_block_size);
};

#endif /* LEVELDETECTOR_H_ */
