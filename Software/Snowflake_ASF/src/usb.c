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
void usb_init()
{
    // Configure USB Vbus monitor as input without pullup
    port_pin_set_config(USB_VBUS_DET_PIN, &gpio_input);
}
