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

#include "Drivers/gpio.h"

// Global Variables
sGpioPinConfig *gpio_output_cfg_low;
sGpioPinConfig *gpio_output_cfg_high;
sGpioPinConfig *gpio_input_cfg_pullup;
sGpioPinConfig *gpio_input_cfg_highz;

void util_init(void);

#endif /* _COMMON_H */