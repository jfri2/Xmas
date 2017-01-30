/** @file flash.c
*
* @brief todo
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#include "flash.h"

/*!
* @brief @todo
* @return void
*/
void flash_init(void)
{
    struct port_config gpio_output   = { .direction = PORT_PIN_DIR_OUTPUT };  
    
    // Configure flash discretes as outputs
    port_pin_set_config(FLASH_CS_PIN, &gpio_output);
    port_pin_set_config(FLASH_HOLD_PIN, &gpio_output);
    port_pin_set_config(FLASH_WP_PIN, &gpio_output);
    
    // Set flash discretes to inactive states
    port_pin_set_output_level(FLASH_CS_PIN, FLASH_INACTIVE);
    port_pin_set_output_level(FLASH_HOLD_PIN, FLASH_INACTIVE);
    port_pin_set_output_level(FLASH_WP_PIN, FLASH_INACTIVE);
}
