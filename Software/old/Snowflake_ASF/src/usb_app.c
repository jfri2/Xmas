/** @file usb_app.c
*
* @brief todo
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#include "usb_app.h"

static bool my_flag_authorize_cdc_transfer = false;

/*!
* @brief @todo
* @return void
*/
void usb_app_init(void)
{
    struct port_config gpio_output   = { .direction = PORT_PIN_DIR_OUTPUT };
    struct port_config gpio_input_up = { .direction = PORT_PIN_DIR_INPUT, \
    .input_pull = PORT_PIN_PULL_UP };
    struct port_config gpio_input    = { .direction = PORT_PIN_DIR_INPUT, \
    .input_pull = PORT_PIN_PULL_NONE };    
    
    // Configure USB Vbus monitor as input without pullup
    port_pin_set_config(USB_VBUS_DET_PIN, &gpio_input);
    
    udc_start();
}

// /*!
// * @brief @todo
// * @return void
// */
// bool my_callback_cdc_enable(uint8_t port)
// {
//     my_flag_authorize_cdc_transfer = true;
//     return true;
// }
// 
// /*!
// * @brief @todo
// * @return void
// */
// void my_callback_cdc_disable(uint8_t port)
// {
//     my_flag_authorize_cdc_transfer = false;
// }
// 
// /*!
// * @brief @todo
// * @return void
// */
// void task(void)
// {
//     if(my_flag_authorize_cdc_transfer) 
//     {
//         udi_cdc_putc('A');
//         udi_cdc_getc();
//     }
// }