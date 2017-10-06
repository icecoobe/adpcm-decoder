/*****************************************************************************
* File Name: ADPCMDecoder.h
* Version 
*
* Description: 
* Handles decompression of nibble into 2 byte word using ADPCM decoder.
*
* Owner:
* SIRK
*    
* Related Document:
*     
*
* Hardware Dependency:
* CYPRESS BLE Dongle
*
* Code Tested With:
* PSoC Creator    
*
******************************************************************************
* Copyright (2015), Cypress Semiconductor Corporation.
******************************************************************************
* This software is owned by Cypress Semiconductor Corporation (Cypress) and is
* protected by and subject to worldwide patent protection (United States and
* foreign), United States copyright laws and international treaty provisions.
* Cypress hereby grants to licensee a personal, non-exclusive, non-transferable
* license to copy, use, modify, create derivative works of, and compile the
* Cypress Source Code and derivative works for the sole purpose of creating
* custom software in support of licensee product to be used only in conjunction
* with a Cypress integrated circuit as specified in the applicable agreement.
* Any reproduction, modification, translation, compilation, or representation of
* this software except as specified above is prohibited without the express
* written permission of Cypress.
*
* Disclaimer: CYPRESS MAKES NO WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, WITH
* REGARD TO THIS MATERIAL, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* Cypress reserves the right to make changes without further notice to the
* materials described herein. Cypress does not assume any liability arising out
* of the application or use of any product or circuit described herein. Cypress
* does not authorize its products for use as critical components in life-support
* systems where a malfunction or failure may reasonably be expected to result in
* significant injury to the user. The inclusion of Cypress' product in a life-
* support systems application implies that the manufacturer assumes all risk of
* such use and in doing so indemnifies Cypress against all charges. Use may be
* limited by and subject to the applicable Cypress software license agreement.
*****************************************************************************/
#ifndef _ADPCMDECODER_H_
#define _ADPCMDECODER_H_ 

typedef short int16;
typedef unsigned short uint16;
typedef char int8;
typedef unsigned char uint8;
typedef int int32;
typedef unsigned int uint32;

/*****************************************************************************
* Global Variable Declaration
*****************************************************************************/
// extern ADPCMState state;

/*****************************************************************************
* External Function Prototypes
*****************************************************************************/

/*******************************************************************************
* Function Name: ADPCMDecoder
********************************************************************************
*
* Summary:
*  ADPCM Decoder function.
*
* Parameters:
*  uint8 : 4 bit ADPCM code in the lower nibble.
*
* Return:
*  int16 : 16 bit decoded voice sample.
*
* Theory:
* The ADPCM algorithm takes advantage of the high correlation between 
* consecutive speech samples, which enables future sample values to be 
* predicted. Instead of encoding the speech sample, ADPCM encodes the 
* difference between a predicted sample and the speech sample. This 
* method provides more efficient compression with a reduction in the 
* number of bits per sample, yet preserves the overall quality of the 
* speech signal.
*
* Side Effects:
*  None
*
* Note:
*  none
*
*******************************************************************************/

extern void adpcm_decoder_init();
extern void adpcm_decoder_decompress_singlebyte(uint8 audioPktByte, char outBuffer[]);

#endif /* _ADPCMDECODER_H_ */
/* [] END OF FILE */
