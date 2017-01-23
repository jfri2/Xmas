/** @file snowflake_init.h*
* @brief Snowflake project initialization definitions
*
* @par
* COPYRIGHT NOTICE: (c) 2017 John Fritz
* All rights reserved
*/

#ifndef _SNOWFLAKE_INIT_H
#define _SNOWFLAKE_INIT_H

///////////////////////////////////////////////////////////////////////////////
// Dependencies
///////////////////////////////////////////////////////////////////////////////
#include <asf.h>
#include "snowflake_board.h"

///////////////////////////////////////////////////////////////////////////////
// Function Prototypes
///////////////////////////////////////////////////////////////////////////////
void snowflake_init(void);
void snowflake_led_init(void);
void snowflake_pb_init(void);
void snowflake_flash_init(void);
void snowflake_usb_init(void);
void snowflake_amp_init(void);

#endif /* _SNOWFLAKE_INIT_H */