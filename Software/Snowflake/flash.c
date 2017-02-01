/** @file flash.c
*
* @brief todo
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#include "lib/flash.h"
#include "common.h"

/*!
* @brief @todo
* @return void
*/
void flash_init(void)
{
    // Configure flash discretes as outputs and inactive
    gpio_pin_config(FLASH_CS_PIN, &gpio_output_cfg_high);
    gpio_pin_config(FLASH_HOLD_PIN, &gpio_output_cfg_high);
    gpio_pin_config(FLASH_WP_PIN, &gpio_output_cfg_high);
}
