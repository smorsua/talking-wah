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
private:
	pm float * sos_coeffs;
	float* sos_state;
	float scaling_factor;
	int sections;
public:
	IIRFilter();
	IIRFilter(pm float * sos_coeffs, float scaling_factor, int sections);
	virtual ~IIRFilter();
	void filter(float* audio_in, float* audio_out, uint32_t audio_block_size);
};



#endif /* IIRFILTER_H_ */
