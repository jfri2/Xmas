/** @file module.c
*
* @brief A description of the module's purpose.
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#include "module.h"

/*!
* @brief Read multiple values from ADC
* @param[in] adc_mux    ADC channel to read
* @param[in] *adc_val   Pointer to location to store data read from ADC
* @param[in] *adc_val_len   Length of adc_val (number of reads to perform)
* @return void
*/
void adc_read(uint8_t adc_mux, uint16_t *adc_val, uint16_t adc_val_len) 
{
    for(uint16_t i=0; i < adc_val_len; i++) 
    {
        adc_val[i] = adc_read_one(adc_mux);
    }
}
