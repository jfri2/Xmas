/** @file pb.c
*
* @brief todo
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#include "lib/pb.h"
#include "common.h"

/*!
* @brief @todo
* @return void
*/
void pb_init(void)
{
    // Configure pushbutton pin as input with pullup
    gpio_pin_config(PB_PIN, &gpio_input_cfg_pullup);
}

