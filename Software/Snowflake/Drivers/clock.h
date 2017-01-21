/** @file clock.h
*
* @brief A description of the module's purpose.
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#ifndef _CLOCK_H
#define _CLOCK_H

#ifdef __cplusplus
extern "C" 
{
#endif

void adc_read(uint8_t adc_mux, uint16_t *adc_val, uint16_t adc_val_len);

#ifdef __cplusplus
}
#endif

#endif /* _CLOCK_H */