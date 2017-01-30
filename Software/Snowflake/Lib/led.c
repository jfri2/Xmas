/** @file led.c
*
* @brief todo
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#include "led.h"
#include "Drivers/gpio.h"
#include "common.h"

/*!
* @brief todo
* @return void
*/
void led_init(void)
{        
    // Configure LEDs as outputs
    gpio_pin_config(LED_R1_PIN, &output_cfg_low);
    gpio_pin_config(LED_G1_PIN, &gpio_output);
    gpio_pin_config(LED_R2_PIN, &gpio_output);
    gpio_pin_config(LED_G2_PIN, &gpio_output);
    gpio_pin_config(LED_R3_PIN, &gpio_output);
    gpio_pin_config(LED_G3_PIN, &gpio_output);
    gpio_pin_config(LED_R4_PIN, &gpio_output);
    gpio_pin_config(LED_G4_PIN, &gpio_output);
    gpio_pin_config(LED_R5_PIN, &gpio_output);
    gpio_pin_config(LED_G5_PIN, &gpio_output);
    gpio_pin_config(LED_R6_PIN, &gpio_output);
    gpio_pin_config(LED_G6_PIN, &gpio_output);
    
    // Set all LEDs off
    gpio_set_pin_level(LED_R1_PIN, LOW);
    gpio_set_pin_level(LED_G1_PIN, LOW);
    gpio_set_pin_level(LED_R2_PIN, LOW);
    gpio_set_pin_level(LED_G2_PIN, LOW);
    gpio_set_pin_level(LED_R3_PIN, LOW);
    gpio_set_pin_level(LED_G3_PIN, LOW);
    gpio_set_pin_level(LED_R4_PIN, LOW);
    gpio_set_pin_level(LED_G4_PIN, LOW);
    gpio_set_pin_level(LED_R5_PIN, LOW);
    gpio_set_pin_level(LED_G5_PIN, LOW);
    gpio_set_pin_level(LED_R6_PIN, LOW);
    gpio_set_pin_level(LED_G6_PIN, LOW);
}
