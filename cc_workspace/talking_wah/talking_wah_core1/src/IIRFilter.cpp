/*
 * IIRFilter.cpp
 *
 *  Created on: 21 dic. 2023
 *      Author: acustica
 */

#include <talking_wah_core1/src/IIRFilter.h>
#include <filter.h>

IIRFilter::IIRFilter(float pm * sos_coeffs,
		float scaling_factor,
		int sections,
		float * sos_state): sections(sections),
				sos_coeffs(sos_coeffs),
				sos_state(sos_state),
				scaling_factor(scaling_factor)	{
	// Zero state
	for (int i = 0; i < (2*sections+1); i++) {
		this->sos_state[i] = 0;
	}
}

IIRFilter::~IIRFilter() {
	// TODO Auto-generated destructor stub
}

void IIRFilter::filter(float* audio_in, float* audio_out, uint32_t audio_block_size) {
	// Process iir filter
	iir(audio_in, audio_out, this->sos_coeffs, this->sos_state, audio_block_size, this->sections);

	// the CCES iir() routine requires that the output be scaled by the b[0] coeff
	for (int i = 0; i < audio_block_size; i++) {
		audio_out[i] *= this->scaling_factor;
	}
}
