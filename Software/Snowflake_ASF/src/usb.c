/** @file usb.c
*
* @brief todo
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#include "usb.h"

/*!
* @brief @todo
* @return void
*/
void usb_init(void)
{
    struct port_config gpio_output   = { .direction = PORT_PIN_DIR_OUTPUT };
    struct port_config gpio_input_up = { .direction = PORT_PIN_DIR_INPUT, \
    .input_pull = PORT_PIN_PULL_UP };
    struct port_config gpio_input    = { .direction = PORT_PIN_DIR_INPUT, \
    .input_pull = PORT_PIN_PULL_NONE };    
    
    // Configure USB Vbus monitor as input without pullup
    port_pin_set_config(USB_VBUS_DET_PIN, &gpio_input);
}
