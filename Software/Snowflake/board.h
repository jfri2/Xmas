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

///////////////////////////////////////////////////////////////////////////////
// CPU Frequency Definitions
///////////////////////////////////////////////////////////////////////////////
#ifndef F_CPU
#define F_CPU   sysclk_get_cpu_hz();
#endif

///////////////////////////////////////////////////////////////////////////////
// GPIO Definitions
///////////////////////////////////////////////////////////////////////////////

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
#define LED_ACTIVE      true    // Active high LEDs
#define LED_INACTIVE    false

// Pushbutton Definitions
#define PB_PIN          PIN_PA27
#define PB_PORT         PORTA
#define PB_ACTIVE       false   // Active low pushbutton
#define PB_INACTIVE     true

// Analog Voltage Reference Definitions
#define VREF_PIN        PIN_PA03
#define VREF_PORT       PORTA
#define VREF_ACTIVE     true    // Active high vref enable
#define VREF_INACTIVE   false

// Audio Amplifier Shutdown Definitions
#define AMP_SHDN_PIN        PIN_PB04
#define AMP_SHDN_PORT       PORTB
#define AMP_SHDN_ACTIVE     false   // Active low shutdown enable
#define AMP_SHDN_INACTIVE   true

// USB VBUS Detect Definitions
#define USB_VBUS_DET_PIN        PIN_PA22
#define USB_VBUS_DET_PORT       PORTA
#define USB_VBUS_DET_ACTIVE     true    // Active high USB VBUS detected
#define USB_VBUS_DET_INACTVE    false

// Flash Definitions
#define FLASH_CS_PIN        PIN_PB00
#define FLASH_CS_PORT       PORTB
#define FLASH_HOLD_PIN      PIN_PB31
#define FLASH_HOLD_PORT     PORTB
#define FLASH_WP_PIN        PIN_PB30
#define FLASH_WP_PORT       PORTB
#define FLASH_ACTIVE        false   // Active low flash interface active
#define FLASH_INACTIVE      true

#endif /* _BOARD_H */