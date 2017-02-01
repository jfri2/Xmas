/** @file common.c
*
* @brief A description of the module's purpose.
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#include "common.h"

void util_init(void)
{
// Init Global structs
    gpio_output_cfg_low = (sGpioPinConfig)
    {
        .pin_type = OUTPUT,
        .default_drive = LOW
    };

    gpio_output_cfg_high = (sGpioPinConfig)
    {
        .pin_type = OUTPUT,
        .default_drive = HIGH
    };

    gpio_input_cfg_pullup = (sGpioPinConfig)
    {
        .pin_type = INPUT,
        .pull = PULLUP
    };

    gpio_input_cfg_highz = (sGpioPinConfig)
    {
        .pin_type = INPUT,
        .pull = HIGHZ
    }; 
}

void delay_cycles(uint64_t cycles)
{
    for (volatile uint64_t i = 0; i < cycles; i++);
}