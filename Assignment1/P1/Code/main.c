#include <lpc214x.h>
#include "led.h"

int main(void)
{
	IO0DIR = 0xFFFFFFFF;
	while(1)
	{
		IO0SET |= 0x00000001;
		delay();
		IO0CLR |= 0x00000001;
		IO0SET |= 0x00000002;
		delay();
		IO0CLR |= 0x00000002;
		IO0SET |= 0x00000004;
		delay();
		IO0CLR |= 0x00000004;
		IO0SET |= 0x00000008;
		delay();
		IO0CLR |= 0x00000008;
		IO0SET |= 0x00000010;
		delay();
		IO0CLR |= 0x00000010;
		IO0SET |= 0x00000020;
		delay();
		IO0CLR |= 0x00000020;
		IO0SET |= 0x00000040;
		delay();
		IO0CLR |= 0x00000040;
		IO0SET |= 0x00000080;
		delay();
		IO0CLR |= 0x00000080;
	}
	return 0;
}
