/** @file audio.c
*
* @brief todo
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#include "audio.h"

/*!
* @brief @todo
* @return void
*/
void amp_init(void)
{
    
    struct port_config gpio_output   = { .direction = PORT_PIN_DIR_OUTPUT };
   
    // Configure amplifier & audio related discretes as outputs
    port_pin_set_config(AMP_SHDN_PIN, &gpio_output);
    port_pin_set_config(VREF_PIN, &gpio_output);
    
    // Turn off amplifier and Vref input
    port_pin_set_output_level(AMP_SHDN_PIN, AMP_SHDN_ACTIVE);
    port_pin_set_output_level(VREF_PIN, VREF_INACTIVE); 
}
