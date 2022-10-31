#include<lpc214x.h>
#include "lcda.h"

int main()
{
    IO0DIR|=0XFFF;
    lcd_int();
    cmd(0x8a);
    test2();
    while(1) {
        cmd(0x18);
        delay;
    }
		return 0;
}

