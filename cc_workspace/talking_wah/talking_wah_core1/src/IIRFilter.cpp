/*
 * IIRFilter.cpp
 *
 *  Created on: 21 dic. 2023
 *      Author: acustica
 */

#include <talking_wah_core1/src/IIRFilter.h>
#include <filter.h>
#include <stddef.h>
#include <stdint.h>

IIRFilter::IIRFilter(): sections(0),
				sos_coeffs(NULL),
				sos_state(NULL),
				scaling_factor(0)	{

}

IIRFilter::IIRFilter(float pm * sos_coeffs,
		float scaling_factor,
		int sections): sections(sections),
				sos_coeffs(sos_coeffs),
				scaling_factor(scaling_factor)	{

	this->sos_state = new float[2*sections+1];

	// Zero state
	for (int i = 0; i < 2*sections + 1; i++) {
		this->sos_state[i] = 0;
	}
}

IIRFilter::~IIRFilter() {
	delete[] this->sos_state;
}

void IIRFilter::filter(float* audio_in, float* audio_out, uint32_t audio_block_size) {
	// Process iir filter
	iir(audio_in, audio_out, this->sos_coeffs, this->sos_state, audio_block_size, this->sections);

	// the CCES iir() routine requires that the output be scaled by the b[0] coeff
	for (int i = 0; i < audio_block_size; i++) {
		audio_out[i] *= this->scaling_factor;
	}
}
