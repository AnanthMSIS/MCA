#include <lpc214x.h>
#include "led.h"

void delay(void)
{
	unsigned int i;
	for(i = 0; i < 50000; i++);
}
