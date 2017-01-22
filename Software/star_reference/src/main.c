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
 * This is a bare minimum user application template.
 *
 * For documentation of the board, go \ref group_common_boards "here" for a link
 * to the board-specific documentation.
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# Minimal main function that starts with a call to system_init()
 * -# Basic usage of on-board LED and button
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
#include <stdbool.h>

// LED Definitions
#define LED_R1_PIN      PIN_PA07
#define LED_R1_PORT     PORTA
#define LED_G1_PIN      PIN_PA06
#define LED_G1_PORT     PORTA
#define LED_R2_PIN      PIN_PB09
#define LED_R2_PORT     PORTB
#define LED_G2_PIN      PIN_PB08
#define LED_G2_PORT     PORTB
#define LED_R3_PIN      PIN_PA09
#define LED_R3_PORT     PORTA
#define LED_G3_PIN      PIN_PA08
#define LED_G3_PORT     PORTA
#define LED_R4_PIN      PIN_PA11
#define LED_R4_PORT     PORTA
#define LED_G4_PIN      PIN_PA10
#define LED_G4_PORT     PORTA
#define LED_R5_PIN      PIN_PB13
#define LED_R5_PORT     PORTB
#define LED_G5_PIN      PIN_PB12
#define LED_G5_PORT     PORTB
#define LED_R6_PIN      PIN_PB11
#define LED_R6_PORT     PORTB
#define LED_G6_PIN      PIN_PB10
#define LED_G6_PORT     PORTB

// Pushbutton Definitions
#define PB_PIN      PIN_PA27
#define PB_PORT     PORTA

int main (void)
{
    // main startup stuff
	system_init();
    
    // gpio config struct declarations
    struct port_config led_pin_conf;
    struct port_config pb_pin_conf;
    
    // pushbutton related stuff
    volatile bool pb_state = false;
    volatile bool pb_state_1 = false;
    
    // init structs
    led_pin_conf.direction  = PORT_PIN_DIR_OUTPUT;
    pb_pin_conf.direction = PORT_PIN_DIR_INPUT;
    pb_pin_conf.input_pull = PORT_PIN_PULL_NONE;
    
    // output inits
    port_pin_set_config(LED_R1_PIN, &led_pin_conf);
    port_pin_set_config(LED_G1_PIN, &led_pin_conf);        
    port_pin_set_config(LED_R2_PIN, &led_pin_conf);
    port_pin_set_config(LED_G2_PIN, &led_pin_conf);        
    port_pin_set_config(LED_R3_PIN, &led_pin_conf);
    port_pin_set_config(LED_G3_PIN, &led_pin_conf);    
    port_pin_set_config(LED_R4_PIN, &led_pin_conf);
    port_pin_set_config(LED_G4_PIN, &led_pin_conf);            
    port_pin_set_config(LED_R5_PIN, &led_pin_conf);
    port_pin_set_config(LED_G5_PIN, &led_pin_conf);    
    port_pin_set_config(LED_R6_PIN, &led_pin_conf);
    port_pin_set_config(LED_G6_PIN, &led_pin_conf);
        
    // input inits
    port_pin_set_config(PB_PIN, &pb_pin_conf);  
    
    //Set outputs high
    port_pin_set_output_level(LED_R1_PIN, true);
    port_pin_set_output_level(LED_G1_PIN, false);    		
    port_pin_set_output_level(LED_R2_PIN, false);
    port_pin_set_output_level(LED_G2_PIN, true);    		
    port_pin_set_output_level(LED_R3_PIN, true);
    port_pin_set_output_level(LED_G3_PIN, false);    		
    port_pin_set_output_level(LED_R4_PIN, false);
    port_pin_set_output_level(LED_G4_PIN, true);    		
    port_pin_set_output_level(LED_R5_PIN, true);
    port_pin_set_output_level(LED_G5_PIN, false);    		
    port_pin_set_output_level(LED_R6_PIN, false);
    port_pin_set_output_level(LED_G6_PIN, true);
        
	while(1)
    {    
        // remember pb state and get new pb state
        pb_state_1 = pb_state;
        pb_state = !port_pin_get_input_level(PB_PIN);        
        
        // check if input is pressed and released, then toggle LED output values
        if((pb_state == false) && (pb_state_1 == true))
        {
            // toggle outputs
            port_pin_toggle_output_level(LED_R1_PIN);
            port_pin_toggle_output_level(LED_G1_PIN);
            port_pin_toggle_output_level(LED_R2_PIN);
            port_pin_toggle_output_level(LED_G2_PIN);
            port_pin_toggle_output_level(LED_R3_PIN);
            port_pin_toggle_output_level(LED_G3_PIN);
            port_pin_toggle_output_level(LED_R4_PIN);
            port_pin_toggle_output_level(LED_G4_PIN);
            port_pin_toggle_output_level(LED_R5_PIN);
            port_pin_toggle_output_level(LED_G5_PIN);
            port_pin_toggle_output_level(LED_R6_PIN);
            port_pin_toggle_output_level(LED_G6_PIN);
        }            
	}
}
