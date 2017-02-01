/*
 * Snowflake.c
 *
 * Created: 12/20/2016 11:45:14 PM
 * Author : John
 */ 

/******************************************************************************
 * TODO-
 *  Now:
 *      Add NVIC and interrupt handlers to startup_saml21.c
 *      Add initialization function definitions
 *      Add application state machine
 *      Define application state machine
 *      Test components on hardware
 *
 *  Future: 
 *      Finish basic application development
 *      Add USB support (SPI Flash loading, basic UI)
 *      Add Sleep/Wakeup modes
 *      Add device descriptors to allow more flexible config
 *      
 *****************************************************************************/

// Includes
#include "sam.h"
#include "board.h"
#include "common.h"
#include "lib/audio.h"
#include "lib/flash.h"
#include "lib/led.h"
#include "lib/pb.h"
#include "lib/usb_app.h"

// State Machine Definitions
typedef enum 
{
    IDLE, 
    PLAY,
    PROG, 
    SLEEP
} eTopState;   // Top state machine states
    
volatile eTopState top_state = IDLE;  
  
int main(void)
{
    /* Initialize the system and components */
    SystemInit();   // Must be first called init routine
    util_init();    // Must be called before library init routines
    
    // Library Init Routines    
    audio_init();
    flash_init();
    led_init();
    pb_init();
    usb_app_init();        
    
    // Toggle Red LEDs On
    gpio_set_pin_level(LED_R1_PIN, HIGH);
    gpio_set_pin_level(LED_R2_PIN, HIGH);
    gpio_set_pin_level(LED_R3_PIN, HIGH);
    gpio_set_pin_level(LED_R4_PIN, HIGH);
    gpio_set_pin_level(LED_R5_PIN, HIGH);
    gpio_set_pin_level(LED_R6_PIN, HIGH);
    
    gpio_set_pin_level(LED_R1_PIN, LOW);
    gpio_set_pin_level(LED_R2_PIN, LOW);
    gpio_set_pin_level(LED_R3_PIN, LOW);
    gpio_set_pin_level(LED_R4_PIN, LOW);
    gpio_set_pin_level(LED_R5_PIN, LOW);
    gpio_set_pin_level(LED_R6_PIN, LOW);
    
    gpio_set_pin_level(LED_G1_PIN, HIGH);
    gpio_set_pin_level(LED_G2_PIN, HIGH);
    gpio_set_pin_level(LED_G3_PIN, HIGH);
    gpio_set_pin_level(LED_G4_PIN, HIGH);
    gpio_set_pin_level(LED_G5_PIN, HIGH);
    gpio_set_pin_level(LED_G6_PIN, HIGH);
    
    gpio_set_pin_level(LED_G1_PIN, LOW);
    gpio_set_pin_level(LED_G2_PIN, LOW);
    gpio_set_pin_level(LED_G3_PIN, LOW);
    gpio_set_pin_level(LED_G4_PIN, LOW);
    gpio_set_pin_level(LED_G5_PIN, LOW);
    gpio_set_pin_level(LED_G6_PIN, LOW);    
    

    /* Application Loop */
    while (1) 
    {
        // Toggle LEDs on and off
        gpio_set_pin_level(LED_R1_PIN, HIGH);
        gpio_set_pin_level(LED_R2_PIN, HIGH);
        gpio_set_pin_level(LED_R3_PIN, HIGH);
        gpio_set_pin_level(LED_R4_PIN, HIGH);
        gpio_set_pin_level(LED_R5_PIN, HIGH);
        gpio_set_pin_level(LED_R6_PIN, HIGH);
        delay_cycles(25000);   
        gpio_set_pin_level(LED_R1_PIN, LOW);
        gpio_set_pin_level(LED_R2_PIN, LOW);
        gpio_set_pin_level(LED_R3_PIN, LOW);
        gpio_set_pin_level(LED_R4_PIN, LOW);
        gpio_set_pin_level(LED_R5_PIN, LOW);
        gpio_set_pin_level(LED_R6_PIN, LOW); 
        delay_cycles(50000);   
        gpio_set_pin_level(LED_G1_PIN, HIGH);
        gpio_set_pin_level(LED_G2_PIN, HIGH);
        gpio_set_pin_level(LED_G3_PIN, HIGH);
        gpio_set_pin_level(LED_G4_PIN, HIGH);
        gpio_set_pin_level(LED_G5_PIN, HIGH);
        gpio_set_pin_level(LED_G6_PIN, HIGH);
        delay_cycles(25000);          
        gpio_set_pin_level(LED_G1_PIN, LOW);
        gpio_set_pin_level(LED_G2_PIN, LOW);
        gpio_set_pin_level(LED_G3_PIN, LOW);
        gpio_set_pin_level(LED_G4_PIN, LOW);
        gpio_set_pin_level(LED_G5_PIN, LOW);
        gpio_set_pin_level(LED_G6_PIN, LOW);
        delay_cycles(50000);          
        
        // Top level state machine
        switch (top_state)
        {
            case IDLE:                
            break;
            
            case PLAY:                
            break;
            
            case PROG:                
            break;
            
            case SLEEP:                
            break;
            
            default:
            break;
        }            
    }
}
