/** @file led.c
*
* @brief todo
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#include "lib/led.h"
#include "common.h"

/*!
* @brief todo
* @return void
*/
void led_init(void)
{        
    // Configure LEDs as outputs & set low
    gpio_pin_config(LED_R1_PIN, &gpio_output_cfg_low);
    gpio_pin_config(LED_G1_PIN, &gpio_output_cfg_low);
    gpio_pin_config(LED_R2_PIN, &gpio_output_cfg_low);
    gpio_pin_config(LED_G2_PIN, &gpio_output_cfg_low);
    gpio_pin_config(LED_R3_PIN, &gpio_output_cfg_low);
    gpio_pin_config(LED_G3_PIN, &gpio_output_cfg_low);
    gpio_pin_config(LED_R4_PIN, &gpio_output_cfg_low);
    gpio_pin_config(LED_G4_PIN, &gpio_output_cfg_low);
    gpio_pin_config(LED_R5_PIN, &gpio_output_cfg_low);
    gpio_pin_config(LED_G5_PIN, &gpio_output_cfg_low);
    gpio_pin_config(LED_R6_PIN, &gpio_output_cfg_low);
    gpio_pin_config(LED_G6_PIN, &gpio_output_cfg_low);
}
