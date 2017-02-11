/** @file common.h
*
* @brief A description of the module's purpose.
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#ifndef _COMMON_H
#define _COMMON_H

#include "board.h"
#include "drv/gpio.h"

// Global Variables
GpioPinConfig_t gpio_output_cfg_low;
GpioPinConfig_t gpio_output_cfg_high;
GpioPinConfig_t gpio_input_cfg_pullup;
GpioPinConfig_t gpio_input_cfg_highz;

void util_init(void);
void delay_cycles(uint64_t cycles);

#endif /* _COMMON_H */