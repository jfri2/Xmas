/** @file snowflake_init.c*
* @brief Snowflake project initialization definitions
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#include "snowflake_init.h"

///////////////////////////////////////////////////////////////////////////////
// Module Variable Definitions
///////////////////////////////////////////////////////////////////////////////
gpio_output.direction = PORT_PIN_DIR_OUTPUT;

gpio_input_up.direction = PORT_PIN_DIR_INPUT;
gpio_input_up.input_pull = PORT_PIN_PULL_UP;

gpio_input.direction = PORT_PIN_DIR_INPUT;
gpio_input.input_pull = PORT_PIN_PULL_NONE;

///////////////////////////////////////////////////////////////////////////////
// Function Definitions
///////////////////////////////////////////////////////////////////////////////
/*!
* @brief @todo
* @return void
*/
void snowflake_init()
{
    snowflake_led_init();
    snowflake_pb_init();
    snowflake_flash_init();
    snowflake_usb_init();
    snowflake_amp_init();
}

/*!
* @brief @todo
* @return void
*/
void snowflake_led_init()
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

/*!
* @brief @todo
* @return void
*/
void snowflake_pb_init()
{
    // Configure pushbutton pin as input with pullup
    port_pin_set_config(PB_PIN, &gpio_input_up);
}

/*!
* @brief @todo
* @return void
*/
void snowflake_flash_init()
{
    // Configure flash discretes as outputs
    port_pin_set_config(FLASH_CS_PIN, &gpio_output);
    port_pin_set_config(FLASH_HOLD_PIN, &gpio_output);
    port_pin_set_config(FLASH_WP_PIN, &gpio_output);
    
    // Set flash discretes to inactive states
    port_pin_set_output_level(FLASH_CS_PIN, FLASH_INACTIVE);
    port_pin_set_output_level(FLASH_HOLD_PIN, FLASH_INACTIVE);
    port_pin_set_output_level(FLASH_WP_PIN, FLASH_INACTIVE);
}

/*!
* @brief @todo
* @return void
*/
void snowflake_usb_init()
{
    // Configure USB Vbus monitor as input without pullup
    port_pin_set_config(USB_VBUS_DET_PIN, &gpio_input);
}

/*!
* @brief @todo
* @return void
*/
void snowflake_amp_init()
{
    // Configure amplifier & audio related discretes as outputs
    port_pin_set_config(AMP_SHDN_PIN, &gpio_output);
    port_pin_set_config(VREF_PIN, &gpio_output);
    
    // Turn off amplifier and Vref input
    port_pin_set_output_level(AMP_SHDN_PIN, AMP_SHDN_ACTIVE);
    port_pin_set_output_level(VREF_PIN, VREF_INACTIVE); 
}