// adpcm_decoder.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "adpcm_decoder.h"
#include "ADPCMDecoder.h"

void ADPCM_DECODER_API InitDecoder()
{
	adpcm_decoder_init();
}

// This is an example of an exported function.
void ADPCM_DECODER_API Decompress(int8 audioPkg[], int audio_data_len, int8 pcm[])
{
	int j = 0;
	for (uint16 i = 0; i < audio_data_len; i++)
	{
		char outSample[4];
		adpcm_decoder_decompress_singlebyte(audioPkg[i], outSample);
		pcm[j++] = outSample[0];
		pcm[j++] = outSample[1];
		pcm[j++] = outSample[2];
		pcm[j++] = outSample[3];
	}
}
