/** @file board.h
* @brief Board specific definitions for snowflake project
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#ifndef _BOARD_H
#define _BOARD_H

#include <stdbool.h>
#include <sam.h>

///////////////////////////////////////////////////////////////////////////////
// CPU Frequency Definitions
///////////////////////////////////////////////////////////////////////////////
#ifndef F_CPU
#define F_CPU    // @todo
#endif

///////////////////////////////////////////////////////////////////////////////
// GPIO Definitions
///////////////////////////////////////////////////////////////////////////////

// LED Definitions
#define LED_R1_PIN      PIN_PA07
#define LED_G1_PIN      PIN_PA06
#define LED_R2_PIN      PIN_PB09
#define LED_G2_PIN      PIN_PB08
#define LED_R3_PIN      PIN_PA09
#define LED_G3_PIN      PIN_PA08
#define LED_R4_PIN      PIN_PA11
#define LED_G4_PIN      PIN_PA10
#define LED_R5_PIN      PIN_PB13
#define LED_G5_PIN      PIN_PB12
#define LED_R6_PIN      PIN_PB11
#define LED_G6_PIN      PIN_PB10

// Pushbutton Definitions
#define PB_PIN      PIN_PA27

// Analog Voltage Reference Definitions
#define VREF_PIN    PIN_PA03

// Audio Amplifier Shutdown Definitions
#define AMP_SHDN_PIN        PIN_PB04

// USB VBUS Detect Definitions
#define USB_VBUS_DET_PIN    PIN_PA22

// Flash Definitions
#define FLASH_CS_PIN        PIN_PB00
#define FLASH_HOLD_PIN      PIN_PB31
#define FLASH_WP_PIN        PIN_PB30

#endif /* _BOARD_H */