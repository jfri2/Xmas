/** @file clock.h
*
* @brief A description of the module's purpose.
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#ifndef _CLOCK_H
#define _CLOCK_H

#include <stdint.h>
#include <stdbool.h>
#include <sam.h>

///////////////////////////////////////////////////////////////////////////////
// Extra Clock Definitions
///////////////////////////////////////////////////////////////////////////////
// Bit positions in GENCTRL register
#define CLK_DIV_POS         16
#define CLK_DIVSEL_POS      12
#define CLK_OOV_POS         10
#define CLK_EN_POS          8
#define CLK_OE_POS          11
#define CLK_IDC_POS         9

///////////////////////////////////////////////////////////////////////////////
// Configuration Enums and Structs
///////////////////////////////////////////////////////////////////////////////
typedef enum 
{
    GEN0 = 0,
    GEN1,
    GEN2,
    GEN3,
    GEN4,
    GEN5,
    GEN6,
    GEN7,
    GEN8
} eClkGen;

typedef enum  
{
    CLKSRC_XOSC = 0,
    CLKSRC_GCLK_IN,
    CLKSRC_GCLK_GEN1,
    CLKSRC_OSCULP32K,
    CLKSRC_OSC32K,
    CLKSRC_XOSC32K,
    CLKSRC_OSC16M,
    CLKSRC_DFLL48M,
    CLKSRC_DPLL96M    
} eClkSrc;

typedef enum
{
    CLKCH_DFLL48M_REF = 0       // DFLL48M Reference
    CLKCH_DPLL,                 // FDPLL96M input clock source for reference
    CLKCH_DPLL_32K,             // FDPLL96M 32kHz clk for FDPLL96M internal lock timer
    CLKCH_EIC,                  // EIC
    CLKCH_USB,                  // USB
    CLKCH_EVSYS_0,              // Event system channel 0
    CLKCH_EVSYS_1,              // Event system channel 1
    CLKCH_EVSYS_2,              // Event system channel 2
    CLKCH_EVSYS_3,              // Event system channel 3   
    CLKCH_EVSYS_4,              // Event system channel 4
    CLKCH_EVSYS_5,              // Event system channel 5
    CLKCH_EVSYS_6,              // Event system channel 6
    CLKCH_EVSYS_7,              // Event system channel 7
    CLKCH_EVSYS_8,              // Event system channel 8
    CLKCH_EVSYS_9,              // Event system channel 9
    CLKCH_EVSYS_10,             // Event system channel 10
    CLKCH_EVSYS_11,             // Event system channel 11
    CLKCH_SERCOM_01234_SLOW,    // SERCOM[0,1,2,3,4] Slow
    CLKCH_SERCOM_0_CORE,        // SERCOM 0 Core
    CLKCH_SERCOM_1_CORE,        // SERCOM 1 Core
    CLKCH_SERCOM_2_CORE,        // SERCOM 2 Core
    CLKCH_SERCOM_3_CORE,        // SERCOM 3 Core
    CLKCH_SERCOM_4_CORE,        // SERCOM 4 Core
    CLKCH_SERCOM_5_SLOW,        // SERCOM 5 Slow
    CLKCH_SERCOM_5_CORE,        // SERCOM 5 Core
    CLKCH_TCC0_TCC1,            // TCC0, TCC1
    CLKCH_TCC2,                 // TCC2
    CLKCH_TC0_TC1,              // TC0, TC1
    CLKCH_TC2_TC3,              // TC2, TC3
    CLKCH_TC4,                  // TC4
    CLKCH_ADC,                  // ADC
    CLKCH_AC,                   // AC
    CLKCH_DAC,                  // DAC
    CLKCH_PTC,                  // PTC
    CLKCH_CCL                   // CCL
} eClkPeriphCh;

typedef enum 
{
    LOW,
    HIGH
} eClkOffVal;

typedef struct
{
    eClkSrc     source;
    uint16_t    div_factor;
    bool        div_pow_2;    
    bool        gen_enable;    
    bool        output_enable;
    eClkOffVal  off_val;    
} sClkConfig;

///////////////////////////////////////////////////////////////////////////////
// Inline Functions
///////////////////////////////////////////////////////////////////////////////
inline void clk_sw_rst(void)
{
    REG_GCLK_CTRLA &= ~(1<<0);
    while(REG_GCLK_CTRLA & 0x01);    // Wait for reset to complete
}


///////////////////////////////////////////////////////////////////////////////
// Function Prototypes
///////////////////////////////////////////////////////////////////////////////
void clk_config_gen(eClkGen clk_gen, sClkConfig clk_config);
void clk_assign_to_periph(eClkGen clk_gen, eClkPeriphCh ch);


#endif /* _CLOCK_H */