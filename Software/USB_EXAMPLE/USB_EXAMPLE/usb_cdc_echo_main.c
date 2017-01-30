#include "atmel_start.h"
#include "atmel_start_pins.h"

int main(void)
{
	atmel_start_init();
	cdcd_acm_example();
}
