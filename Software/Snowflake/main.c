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
#include "Drivers/gpio.h"
#include "board.h"


// State Machine Definitions
typedef enum 
{
    IDLE, 
    PLAY,
    PROG, 
    SLEEP
} eTopState;   // Top state machine states
    
volatile eTopState top_state = IDLE;  
  
sGpioPinConfig *led_cfg = &(sGpioPinConfig)
{
    .pin_type = OUTPUT,
    .default_drive = LOW
};    


int main(void)
{
    /* Initialize the system */
    SystemInit();
    gpio_pin_config(LED_R1_PIN, led_cfg);
    //gpio_set_pin_level(LED_R1_PIN, HIGH);

    /* Application Loop */
    while (1) 
    {
        
        
        
        
        
//         // Top level state machine
//         switch (top_state)
//         {
//             case IDLE:
//                 
//             break;
//             
//             case PLAY:
//                 
//             break;
//             
//             case PROG:
//                 
//             break;
//             
//             case SLEEP:
//                 
//             break;
//         }            
    }
}
