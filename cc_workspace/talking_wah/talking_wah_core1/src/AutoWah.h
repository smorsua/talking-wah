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
#include "audio_processing/audio_elements/biquad_filter.h"

class AutoWah {
private:
	LevelDetector level_detector;
	PEAK_FILTER peak_filter;
	BIQUAD_FILTER lp_filter;
public:
	AutoWah(float audio_sample_rate, pm float * peak_filter_coeffs,  pm float * lp_filter_coeffs);
	virtual ~AutoWah();
	float filter(float* audio_in, float* audio_out, uint32_t audio_block_size);
	float last_level;
};

#endif /* AUTOWAH_H_ */
