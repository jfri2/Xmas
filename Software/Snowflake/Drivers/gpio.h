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
// Common GPIO Parameters
///////////////////////////////////////////////////////////////////////////////
// typdef enum
// {
// 	
// } gpio_pin_t

///////////////////////////////////////////////////////////////////////////////
// GPIO Pin Input Configuration Parameters
///////////////////////////////////////////////////////////////////////////////
typedef enum
{
	HIGHZ,
	PULLUP
} eGpioPull;

typedef struct
{
	uint8_t			pin_number;
	eGpioPull		pull;
} sGpioInput;

///////////////////////////////////////////////////////////////////////////////
// GPIO Pin Output Configuration Parameters
///////////////////////////////////////////////////////////////////////////////
typedef enum
{
	NORMAL,
	STRONG
} eGpioDrive;

typedef struct
{
	uint8_t			pin_number;
	eGpioDrive	    drive_strength;
} sGpioOutput;

///////////////////////////////////////////////////////////////////////////////
// GPIO Pin Peripheral Configuration Parameters
///////////////////////////////////////////////////////////////////////////////
typedef struct 
{
	uint8_t         pin_number;  
} sGpioPeripheral;

///////////////////////////////////////////////////////////////////////////////
// GPIO Function Prototypes
///////////////////////////////////////////////////////////////////////////////
void gpio_config_input(sGpioInput *);
void gpio_config_output(sGpioOutput *);
void gpio_config_peripheral(sGpioPeripheral *);

#ifdef __cplusplus
}
#endif

#endif // _GPIO_H