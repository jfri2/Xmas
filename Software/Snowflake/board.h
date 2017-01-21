/** @file board.h
*
* @brief A description of the module's purpose.
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#ifndef _BOARD_H
#define _BOARD_H

#ifdef __cplusplus
extern "C" 
{
#endif

void adc_read(uint8_t adc_mux, uint16_t *adc_val, uint16_t adc_val_len);

#ifdef __cplusplus
}
#endif

#endif // _BOARD_H