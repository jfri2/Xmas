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
#include "Lib/audio.h"
#include "Lib/flash.h"
#include "Lib/led.h"
#include "Lib/pb.h"
#include "Lib/usb_app.h"

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
    /* Initialize the system */
    SystemInit();        
    
    gpio_set_pin_level(LED_R1_PIN, HIGH);
    gpio_set_pin_level(LED_G1_PIN, LOW);
    gpio_set_pin_level(LED_R2_PIN, HIGH);
    gpio_set_pin_level(LED_G2_PIN, LOW);
    gpio_set_pin_level(LED_R3_PIN, HIGH);
    gpio_set_pin_level(LED_G3_PIN, LOW);
    gpio_set_pin_level(LED_R4_PIN, HIGH);
    gpio_set_pin_level(LED_G4_PIN, LOW);
    gpio_set_pin_level(LED_R5_PIN, HIGH);
    gpio_set_pin_level(LED_G5_PIN, LOW);
    gpio_set_pin_level(LED_R6_PIN, HIGH);
    gpio_set_pin_level(LED_G6_PIN, LOW);

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
