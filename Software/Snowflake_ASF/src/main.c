/**
 * \file
 *
 * \brief Empty user application template
 *
 */

/**
 * \mainpage User Application template doxygen documentation
 *
 * \par Empty user application template
 *
 * This is a bare minimum user application template.
 *
 * For documentation of the board, go \ref group_common_boards "here" for a link
 * to the board-specific documentation.
 *
 * \par Content
 *
 * -# Include the ASF header files (through asf.h)
 * -# Minimal main function that starts with a call to system_init()
 * -# Basic usage of on-board LED and button
 * -# "Insert application code here" comment
 *
 */

/*
 * Include header files for all drivers that have been imported from
 * Atmel Software Framework (ASF).
 */
/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */

#include <asf.h>
#include "snowflake_board.h"
#include "snowflake_init.h"

void snowflake_init(void);

int main(void)
{
	system_init();      // Generic ASF initializations    
    snowflake_init();   // Project and board specific initializations

	while(true) 
    {  

	}
}

void snowflake_init()
{
    led_init(void);
    pb_init(void);
    flash_init(void);
    usb_init(void);
    amp_init(void);
}