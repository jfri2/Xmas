/** @file led.c
*
* @brief todo
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#include "led.h"

/*!
* @brief todo
* @return void
*/
void led_init()
{
    // Configure LEDs as outputs
    port_pin_set_config(LED_R1_PIN, &gpio_output);
    port_pin_set_config(LED_G1_PIN, &gpio_output);
    port_pin_set_config(LED_R2_PIN, &gpio_output);
    port_pin_set_config(LED_G2_PIN, &gpio_output);
    port_pin_set_config(LED_R3_PIN, &gpio_output);
    port_pin_set_config(LED_G3_PIN, &gpio_output);
    port_pin_set_config(LED_R4_PIN, &gpio_output);
    port_pin_set_config(LED_G4_PIN, &gpio_output);
    port_pin_set_config(LED_R5_PIN, &gpio_output);
    port_pin_set_config(LED_G5_PIN, &gpio_output);
    port_pin_set_config(LED_R6_PIN, &gpio_output);
    port_pin_set_config(LED_G6_PIN, &gpio_output);
    
    // Set all LEDs off
    port_pin_set_output_level(LED_R1_PIN, LED_INACTIVE);
    port_pin_set_output_level(LED_G1_PIN, LED_INACTIVE);
    port_pin_set_output_level(LED_R2_PIN, LED_INACTIVE);
    port_pin_set_output_level(LED_G2_PIN, LED_INACTIVE);
    port_pin_set_output_level(LED_R3_PIN, LED_INACTIVE);
    port_pin_set_output_level(LED_G3_PIN, LED_INACTIVE);
    port_pin_set_output_level(LED_R4_PIN, LED_INACTIVE);
    port_pin_set_output_level(LED_G4_PIN, LED_INACTIVE);
    port_pin_set_output_level(LED_R5_PIN, LED_INACTIVE);
    port_pin_set_output_level(LED_G5_PIN, LED_INACTIVE);
    port_pin_set_output_level(LED_R6_PIN, LED_INACTIVE);
    port_pin_set_output_level(LED_G6_PIN, LED_INACTIVE);
}
