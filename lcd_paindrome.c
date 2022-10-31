#include<lpc214x.h>
#include "lcd.h"

void lcd_init()
{
    cmd(0x30);
    cmd(0x0c);
    cmd(0x06);
    cmd(0x01);
    cmd(0x80);
}

void cmd(unsigned char a)
{
    IO0PIN&=0x00;
    IO0PIN|=(a<<0);
    IO0CLR|=bit(8);                //rs=0
    IO0CLR|=bit(9);                //rw=0
    IO0SET|=bit(10);               //en=1
    delay
    IO0CLR|=bit(10);               //en=0
}

void dat(unsigned char b)
{
    IO0PIN&=0x00;
    IO0PIN|=(b<<0);
    IO0SET|=bit(8);                //rs=1
    IO0CLR|=bit(9);                //rw=0
    IO0SET|=bit(10);               //en=1
    delay
    IO0CLR|=bit(10);               //en=0
}
int my_strlen(char *p)
{
		int count = 0;
		for(int j = 0; *(p+j) != '\0'; count++);
		return count;
}

int palindrome(unsigned char *p, int len)
{
		int temp = len;
    for(int j = 0; j < len/2; j++) {
        if(*(p+j) != *(p+temp))
						return 1;
				temp--;
    }
		return 0;
}

void string(unsigned char *p)
{
    while(*p!='\0') {
        dat(*p++);
    }
}