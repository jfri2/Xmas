/**
 * \file
 *
 * \brief Low-level initialization functions called upon chip startup.
 *
 * Copyright (c) 2016 Atmel Corporation,
 *                    a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

#include "saml21.h"

/**
 * Initial system clock frequency. The System RC Oscillator (RCSYS) provides
 *  the source for the main clock at chip startup.
 */
#define __SYSTEM_CLOCK    (4000000)

/*!< System Clock Frequency (Core Clock)*/
uint32_t SystemCoreClock = __SYSTEM_CLOCK; 

/**
 * Initialize the system
 *
 * @brief  Setup the microcontroller system.
 *         Initialize the System and update the SystemCoreClock variable.
 */
void SystemInit(void)
{
	// Keep the default device state after reset
	SystemCoreClock = __SYSTEM_CLOCK;
    
    // Initialize Systick for 1ms interrupts (if applicable)
    
    // Initialize GPIO
        /**********************************************************************
         * GPIO Requirements:
         *  Create device descriptor for at a minimum the following:
         *      output: init output hight, set high/low
         *      input:  init input, set pullup/pulldown/none
         *  Allow dynamic configuration of GPIO by passing configuration struct
         *  Initialize all GPIOs on board to their functions & set default lvls
         *********************************************************************/
	
    // Initialize PWM (TC and TCC modules for PWM only)
        /**********************************************************************
         * PWM Requirements:
         *  Run at >= 10 kHz, < 1 MHz
         *  Each TC and TCC shall run at the same frequency
         *  Frequency shall be passed to this function
         *  Includes initialization for output PWM pins. Default set to 0% duty 
         *********************************************************************/
    
    // Initialize Timer (TC module for audio playback)
        /**********************************************************************
         * TC Requirements:
         *  Run at sampling frequency of audio file
         *  Compare on overflow or compare on match
         *  Sampling frequency shall be passed to this function
         *********************************************************************/
        
    // Initialize UART
        /**********************************************************************
         * UART Requirements:
         *  Run at variety of baud rates (dynamically calculate divider)
         *  Baud rate shall be passed to this function
         *********************************************************************/
    
    // Initialize SPI
        /**********************************************************************
         * SPI Requirements
         *  TBD - see SPI flash datasheet
         *  Requires GPIO to be configured (set Flash CS, WP, and Hold high)
         *********************************************************************/
    
    // Initialize DAC
        /**********************************************************************
         * DAC Requirements
         *  TBD
         *********************************************************************/
        
            
}

/**
 * Update SystemCoreClock variable
 *
 * @brief  Updates the SystemCoreClock with current core Clock
 *         retrieved from cpu registers.
 */
void SystemCoreClockUpdate(void)
{
	// Not implemented
	SystemCoreClock = __SYSTEM_CLOCK;
	return;
}
