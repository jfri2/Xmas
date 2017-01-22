/**
 * \file
 *
 * \brief Empty user application template
 *
 */

/**
 * \mainpage User Application template doxygen documentation
 *
 * \par Empty user application template
 *
 * Bare minimum empty user application template
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# Minimal main function that starts with a call to system_init()
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */
#include <asf.h>

const uint8_t LED_R_PIN = PIN_PA07; // PA07
const uint8_t LED_G_PIN = PIN_PA08; // PA08 

int main (void)
{
	system_init();
    
    struct port_config config_port_pin;
    port_get_config_defaults(&config_port_pin);
    config_port_pin.direction = PORT_PIN_DIR_OUTPUT;
    port_pin_set_config(LED_R_PIN, &config_port_pin);
    port_pin_set_config(LED_G_PIN, &config_port_pin);

	/* Insert application code here, after the board has been initialized. */
    while(true)
    {
        port_pin_set_output_level(LED_R_PIN, 1);
        port_pin_set_output_level(LED_G_PIN, 1);
        // stuff
    }
}
