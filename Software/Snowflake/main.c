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
    IDLE = 0, 
    PLAY,
    PROG, 
    SLEEP
} eTopState;   // Top state machine states

// enum idle_state_t {};                       // Idle sub-state machine states
// enum play_state_t {};                       // Play sub-state machine states
// enum prog_state_t {};                       // Prog sub-state machine states
// enum sleep_state_t {};                      // Sleep sub-state machine states    
    
volatile eTopState top_state = IDLE;
    

int main(void)
{
    /* Initialize the system */
    SystemInit();

    /* Application Loop */
    while(1) 
    {
        // Top level state machine
        switch(top_state)
        {
            case IDLE:
                // Implement Idle state
            break;
            
            case PLAY:
                // Implement Play state
            break;
            
            case PROG:
                // Implement Program state
            break;
            
            case SLEEP:
                // Implement Sleep state
            break;
        }            
    }
}
