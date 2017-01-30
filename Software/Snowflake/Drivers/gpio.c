/** @file gpio.c
*
* @brief @todo
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#include "gpio.h"
#include "sam.h"

/*!
* @brief @todo
* @return void
*/
void gpio_pin_config(uint32_t pin, sGpioPinConfig *config)
{
    eGpioPortLetter gpio_port = GPIO_PORT_A;
    uint32_t pin_bit;
    uint32_t dirclr = 0x0000;
    uint32_t dirset = 0x0000;
    uint32_t outclr = 0x0000;
    uint32_t outset = 0x0000;
    
    // Check to see if the pin is on port B: set an offset & move pin number
    if (pin >= GPIO_PORT_PIN_OFFSET)
    {
        gpio_port = GPIO_PORT_B;   
        pin = GPIO_PORT_PIN_OFFSET - pin;
    }
    
    pin_bit = 0x0000 | (1 << pin);  // Mask just pin # in bitfield to change


    switch (config->pin_type)
    {
        case INPUT:
            dirclr |= pin_bit;                  // set pin to input
            if (config->pull == PULLUP)
            {
                outset |= pin_bit;              // set pin as pullup
            } 
            else if (config->pull == HIGHZ) {
                outclr |= pin_bit;              // set pin as HIGHZ
            }
        break;
        
        case OUTPUT:
            dirset |= pin_bit;                  // set pin to output
            if (config->default_drive == HIGH)
            {
                outset |= pin_bit;              // set output high
            } 
            else if (config->default_drive == LOW) {
                outclr |= pin_bit;              // set output low
            }            
        break;
        
        case PERIPH:
            // set pinmask to selected peripheral function           
        break;
        
        default:
        break;
    }
    
    // Apply all changes to appropriate registers
    switch (gpio_port)
    {
        case GPIO_PORT_A:
            REG_PORT_DIRCLR0 = dirclr;
            REG_PORT_DIRSET0 = dirset;
            REG_PORT_OUTCLR0 = outclr;
            REG_PORT_OUTSET0 = outset;
        break;
        
        case GPIO_PORT_B:
            REG_PORT_DIRCLR1 = dirclr;
            REG_PORT_DIRSET1 = dirset;
            REG_PORT_OUTCLR1 = outclr;
            REG_PORT_OUTSET1 = outset;
        break;
        
        default:
        break;
    }
}

/*!
* @brief @todo
* @return void
*/
void gpio_set_pin_level(uint32_t pin, eGpioLevel level)
{
    eGpioPortLetter gpio_port = GPIO_PORT_A;
    uint32_t pin_bit;
    
    // Check to see if the pin is on port B: set an offset & move pin number
    if (pin >= GPIO_PORT_PIN_OFFSET)
    {
        gpio_port = GPIO_PORT_B;
        pin = GPIO_PORT_PIN_OFFSET - pin;
    }
    
    pin_bit = 0x0000 | (1 << pin);  // Mask just pin # in bitfield to change
    
    if (level == LOW) 
    {
        switch (gpio_port)
        {
            case GPIO_PORT_A:
            REG_PORT_OUTCLR0 |= pin_bit;
            break;
            
            case GPIO_PORT_B:
            REG_PORT_OUTSET1 |= pin_bit;
            break;
            
            default:
            break;
        }
    } 
    else if (level == HIGH)
    {
        switch (gpio_port)
        {
            case GPIO_PORT_A:
            REG_PORT_OUTSET0 |= pin_bit;
            break;
            
            case GPIO_PORT_B:
            REG_PORT_OUTSET1 |= pin_bit;
            break;
            
            default:
            break;
        }
    }        
}

/*!
* @brief @todo
* @return void
*/
void gpio_toggle_pin_level(uint32_t pin)
{
    eGpioPortLetter gpio_port = GPIO_PORT_A;
    uint32_t pin_bit;
    
    // Check to see if the pin is on port B: set an offset & move pin number
    if (pin >= GPIO_PORT_PIN_OFFSET)
    {
        gpio_port = GPIO_PORT_B;
        pin = GPIO_PORT_PIN_OFFSET - pin;
    }
    
    pin_bit = 0x0000 | (1 << pin);  // Mask just pin # in bitfield to change
    
    switch (gpio_port)
    {
        case GPIO_PORT_A:
            REG_PORT_OUTTGL0 |= pin_bit;
        break;
         
        case GPIO_PORT_B:
            REG_PORT_OUTTGL1 |= pin_bit;
        break;
         
        default:
        break;
    }       
}

/*!
* @brief @todo
* @return eGpioLevel
*/
eGpioLevel gpio_get_pin_level(uint32_t pin)
{
    eGpioLevel gpio_level;
    eGpioPortLetter gpio_port = GPIO_PORT_A;
    uint32_t pin_bit;
    
    // Check to see if the pin is on port B: set an offset & move pin number
    if (pin >= GPIO_PORT_PIN_OFFSET)
    {
        gpio_port = GPIO_PORT_B;
        pin = GPIO_PORT_PIN_OFFSET - pin;
    }
    
    pin_bit = 0x0000 | (1 << pin);  // Mask just pin # in bitfield to change
    
    switch (gpio_port)
    {
        case GPIO_PORT_A:
            if ((REG_PORT_IN0 & pin_bit) != 0)
            {
                gpio_level = HIGH;
            } 
            else 
            {
                gpio_level = LOW;
            }
        break;
         
        case GPIO_PORT_B:
            if ((REG_PORT_IN1 & pin_bit) != 0)
            {
                gpio_level = HIGH;
            } 
            else 
            {
                gpio_level = LOW;
            }
        break;
         
        default:
        break;
    }  
    
    return(gpio_level);
}
