#ifndef ATMEL_START_H_INCLUDED
#define ATMEL_START_H_INCLUDED

#include "driver_init.h"
#include "usb_start.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Initializes MCU, drivers and middleware in the project
**/
void atmel_start_init(void);

#ifdef __cplusplus
}
#endif
#endif
