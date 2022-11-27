#include <lpc214x.h>
#include "lcd.h"

int main()
{
    IO0DIR|=0XFFFFFFFF;
		IO1DIR|=0x00000000;
		LCD_INIT();
		LCD_STRING("MSIS");
    while(1) 
		{
			if ((IO1PIN & bit(16)) == 0)
			{
				LCD_CMD(0x1);
				delay_ms(5);
				LCD_STRING("MSIS");
			}
    }
		return 0;
}
