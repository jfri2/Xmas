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

#include <stdint.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////
// GPIO Definitions and Enums for managing port differences
///////////////////////////////////////////////////////////////////////////////
#define GPIO_PORT_PIN_OFFSET    32

typedef enum
{
    GPIO_PORT_A = 0,
    GPIO_PORT_B    
} GpioPortLetter_t;

///////////////////////////////////////////////////////////////////////////////
// GPIO Pin Configuration Enums
///////////////////////////////////////////////////////////////////////////////
typedef enum
{
	INPUT = 0,
	OUTPUT,
	PERIPH
} GpioType_t;

typedef enum
{
	HIGHZ = 0,
	PULLUP
} GpioPull_t;

typedef enum
{
	LOW = 0,
	HIGH
} GpioLevel_t;

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
} GpioPeriph_t;

///////////////////////////////////////////////////////////////////////////////
// GPIO Pin Configuration Struct
///////////////////////////////////////////////////////////////////////////////
typedef struct
{
	GpioType_t		pin_type;
	GpioLevel_t		default_drive;
	GpioPull_t		pull;
    GpioPeriph_t    periph_function;
} GpioPinConfig_t;

///////////////////////////////////////////////////////////////////////////////
// GPIO Functions
///////////////////////////////////////////////////////////////////////////////
void gpio_pin_config(uint32_t pin, GpioPinConfig_t *config);
void gpio_set_pin_level(uint32_t pin, GpioLevel_t level);
void gpio_toggle_pin_level(uint32_t pin);
GpioLevel_t gpio_get_pin_level(uint32_t pin);

#endif // _GPIO_H