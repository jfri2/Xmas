/** @file pb.c
*
* @brief todo
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#include "pb.h"

/*!
* @brief @todo
* @return void
*/
void snowflake_pb_init()
{
    // Configure pushbutton pin as input with pullup
    port_pin_set_config(PB_PIN, &gpio_input_up);
}

