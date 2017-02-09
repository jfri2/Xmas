/** @file clock.c
*
* @brief A description of the module's purpose.
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#include "clock.h"

/*!
* @brief todo
* @return void
*/
void clk_config_gen(eClkGen clk_gen, sClkConfig clk_config)
{
    volatile uint32_t gen_ctrl_reg = 0;
    
    // Read and store selected generator control register
    switch (clk_gen)
    {
        case GEN0:
            gen_ctrl_reg = REG_GCLK_GENCTRL0;
        break;
        
        case GEN1:
            gen_ctrl_reg = REG_GCLK_GENCTRL1;            
        break;
        
        case GEN2:
            gen_ctrl_reg = REG_GCLK_GENCTRL2;            
        break;
        
        case GEN3:
            gen_ctrl_reg = REG_GCLK_GENCTRL3;            
        break;
        
        case GEN4:
            gen_ctrl_reg = REG_GCLK_GENCTRL4;            
        break;
        
        case GEN5:
            gen_ctrl_reg = REG_GCLK_GENCTRL5;            
        break;
        
        case GEN6:
            gen_ctrl_reg = REG_GCLK_GENCTRL6;            
        break;
        
        case GEN7:
            gen_ctrl_reg = REG_GCLK_GENCTRL7;            
        break;
        
        case GEN8:
            gen_ctrl_reg = REG_GCLK_GENCTRL8;            
        break;
    }
    
    // Set generator source
    gen_ctrl_reg |= (clk_config.source & 0b00011111);
    
    // Set division factor
    gen_ctrl_reg &= (((uint32_t)clk_config.div_factor << CLK_DIV_POS) | 0x0000FFFF);
    
    // Enable 2^.div_factor if required
    if (clk_config.div_pow_2 == true)
    {
        gen_ctrl_reg |= (1 << CLK_DIVSEL_POS);
    }
    else
    {
        gen_ctrl_reg &= ~(1 << CLK_DIVSEL_POS);
    }
    
    // Improve duty cycle if divider is an odd value
    if (((clk_config.div_factor & 0x00000001) == 1) && (clk_config.div_pow_2 == false))
    {
        gen_ctrl_reg |= (1 << CLK_IDC_POS);
    }
    else 
    {
        gen_ctrl_reg &= (1 << CLK_IDC_POS);
    }
    
    // Set default disable output value to High or Low
    if (clk_config.off_val == HIGH)
    {
        gen_ctrl_reg |= (1 << CLK_OOV_POS);
    }
    else if (clk_config.off_val == LOW)
    {
        gen_ctrl_reg &= ~(1 << CLK_OOV_POS);
    }
    
    // Enable generator if required
    if (clk_config.gen_enable == true)
    {
        gen_ctrl_reg |= (1 << CLK_EN_POS);
    }
    else
    {
        gen_ctrl_reg &= ~(1 << CLK_EN_POS);
    }
    
    // Enable generator output if required
    if (clk_config.output_enable == true)
    {
        gen_ctrl_reg |= (1 << CLK_OE_POS);
    }
    else
    {
        gen_ctrl_reg &= ~(1 << CLK_OE_POS);
    }   
}

/*!
* @brief todo
* @return void
*/
void clk_assign_to_periph(eClkGen clk_gen, eClkPeriphCh ch)
{
    
}