// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the ADPCM_DECODER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// ADPCM_DECODER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ADPCM_DECODER_EXPORTS
#define ADPCM_DECODER_API __declspec(dllexport) __stdcall
#else
#define ADPCM_DECODER_API __declspec(dllimport) __stdcall
#endif

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void ADPCM_DECODER_API InitDecoder();
void ADPCM_DECODER_API Decompress(char audioPkg[], int audio_data_len, char pcm[]);

#ifdef __cplusplus
}
#endif // __cplusplus, extern "C"