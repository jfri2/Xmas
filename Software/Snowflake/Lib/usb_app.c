/** @file usb_app.c
*
* @brief todo
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#include "usb_app.h"
#include "Drivers/gpio.h"
#include "common.h"

/*!
* @brief @todo
* @return void
*/
void usb_app_init(void)
{    
    // Configure USB Vbus monitor as input without pullup
    gpio_pin_config(USB_VBUS_DET_PIN, &gpio_input_cfg_highz);

}
