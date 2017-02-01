/** @file audio.c
*
* @brief todo
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#include "lib/audio.h"
#include "common.h"

/*!
* @brief @todo
* @return void
*/
void audio_init(void)
{   
    // Configure amplifier & audio related discretes as outputs. Turn them off
    gpio_pin_config(AMP_SHDN_PIN, &gpio_output_cfg_high);
    gpio_pin_config(VREF_PIN, &gpio_output_cfg_low);
}
