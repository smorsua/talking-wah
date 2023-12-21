/*
 * IIRFilter.h
 *
 *  Created on: 21 dic. 2023
 *      Author: acustica
 */

#ifndef IIRFILTER_H_
#define IIRFILTER_H_

#include <stdint.h>

class IIRFilter {
	float pm * sos_coeffs;
	float* sos_state;
	float scaling_factor;
	int sections;
public:
	IIRFilter(float pm * sos_coeffs, float scaling_factor, int sections, float * sos_state);
	virtual ~IIRFilter();
	void filter(float* audio_in, float* audio_out, uint32_t audio_block_size);
};



#endif /* IIRFILTER_H_ */
