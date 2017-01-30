/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <peripheral_clk_config.h>
#include <utils.h>
#include <hal_init.h>
#include <hpl_irq.h>

extern struct _irq_descriptor *_irq_table[PERIPH_COUNT_IRQn];
extern void                    Default_Handler(void);

void TARGET_USB_PORT_init(void)
{

	gpio_set_pin_direction(USB_DM,
	                       // <y> Pin direction
	                       // <id> pad_direction
	                       // <GPIO_DIRECTION_OFF"> Off
	                       // <GPIO_DIRECTION_IN"> In
	                       // <GPIO_DIRECTION_OUT"> Out
	                       GPIO_DIRECTION_OUT);

	gpio_set_pin_level(USB_DM,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	gpio_set_pin_pull_mode(USB_DM,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(USB_DM, PINMUX_PA24G_USB_DM);

	gpio_set_pin_direction(USB_DP,
	                       // <y> Pin direction
	                       // <id> pad_direction
	                       // <GPIO_DIRECTION_OFF"> Off
	                       // <GPIO_DIRECTION_IN"> In
	                       // <GPIO_DIRECTION_OUT"> Out
	                       GPIO_DIRECTION_OUT);

	gpio_set_pin_level(USB_DP,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	gpio_set_pin_pull_mode(USB_DP,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_OFF);

	gpio_set_pin_function(USB_DP, PINMUX_PA25G_USB_DP);
}

/* The USB module requires a GCLK_USB of 48 MHz ~ 0.25% clock
 * for low speed and full speed operation. */
#if (CONF_GCLK_USB_FREQUENCY > (48000000 + 48000000 / 400)) || (CONF_GCLK_USB_FREQUENCY < (48000000 - 48000000 / 400))
#warning USB clock should be 48MHz ~ 0.25% clock, check your configuration!
#endif

void TARGET_USB_CLOCK_init(void)
{

	hri_gclk_write_PCHCTRL_reg(GCLK, USB_GCLK_ID, CONF_GCLK_USB_SRC | GCLK_PCHCTRL_CHEN);
	hri_mclk_set_AHBMASK_USB_bit(MCLK);
	hri_mclk_set_APBBMASK_USB_bit(MCLK);
}

void TARGET_USB_init(void)
{
	TARGET_USB_CLOCK_init();
	usb_d_init();
	TARGET_USB_PORT_init();
}

void DMAC_Handler(void)
{
	if (_irq_table[DMAC_IRQn + 0]) {
		_irq_table[DMAC_IRQn + 0]->handler(_irq_table[DMAC_IRQn + 0]->parameter);
	} else {
		Default_Handler();
	}
}

void MCLK_Handler(void)
{
	if (_irq_table[+0]) {
		_irq_table[+0]->handler(_irq_table[+0]->parameter);
	} else {
		Default_Handler();
	}
}

void OSC32KCTRL_Handler(void)
{
	if (_irq_table[+0]) {
		_irq_table[+0]->handler(_irq_table[+0]->parameter);
	} else {
		Default_Handler();
	}
}

void OSCCTRL_Handler(void)
{
	if (_irq_table[+0]) {
		_irq_table[+0]->handler(_irq_table[+0]->parameter);
	} else {
		Default_Handler();
	}
}

void USB_Handler(void)
{
	if (_irq_table[USB_IRQn + 0]) {
		_irq_table[USB_IRQn + 0]->handler(_irq_table[USB_IRQn + 0]->parameter);
	} else {
		Default_Handler();
	}
}

void system_init(void)
{
	init_mcu();

	TARGET_USB_init();
}
