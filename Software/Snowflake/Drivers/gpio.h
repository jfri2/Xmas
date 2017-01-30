/** @file gpio.h
*
* @brief @todo
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#ifndef _GPIO_H
#define _GPIO_H

#ifdef __cplusplus
extern "C" 
{
#endif

#include <stdint.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////
// GPIO Definitions and Enums for managing port differences
///////////////////////////////////////////////////////////////////////////////
#define GPIO_PORT_PIN_OFFSET    32

typedef enum
{
    GPIO_PORT_A,
    GPIO_PORT_B    
} eGpioPortLetter;

///////////////////////////////////////////////////////////////////////////////
// GPIO Pin Configuration Enums
///////////////////////////////////////////////////////////////////////////////
typedef enum
{
	INPUT,
	OUTPUT,
	PERIPH
} eGpioType;

typedef enum
{
	HIGHZ,
	PULLUP
} eGpioPull;

typedef enum
{
	LOW,
	HIGH
} eGpioLevel;

typedef enum
{
	PERIPH_A = 0,
	PERIPH_B,
	PERIPH_C,
	PERIPH_D,
	PERIPH_E,
	PERIPH_F,
	PERIPH_G,
	PERIPH_H,
	PERIPH_I
} eGpioPeriph;

///////////////////////////////////////////////////////////////////////////////
// GPIO Pin Configuration Struct
///////////////////////////////////////////////////////////////////////////////
typedef struct
{
	eGpioType		pin_type;
	eGpioLevel		default_drive;
	eGpioPull		pull;
    eGpioPeriph     periph_function;
} sGpioPinConfig;

///////////////////////////////////////////////////////////////////////////////
// GPIO Functions
///////////////////////////////////////////////////////////////////////////////
void gpio_pin_config(uint32_t pin, sGpioPinConfig *config);
void gpio_set_pin_level(uint32_t pin, eGpioLevel level);
void gpio_toggle_pin_level(uint32_t pin);
eGpioLevel gpio_get_pin_level(uint32_t pin);

#ifdef __cplusplus
}
#endif

#endif // _GPIO_H