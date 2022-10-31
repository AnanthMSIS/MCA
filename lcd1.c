#include "lcd.h"
void lcd_int()
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
    delay;
    IO0CLR|=bit(10);               //en=0
}



void dat(unsigned char b)
{
    IO0PIN&=0x00;
    IO0PIN|=(b<<0);
    IO0SET|=bit(8);                //rs=1
    IO0CLR|=bit(9);                //rw=0
    IO0SET|=bit(10);               //en=1
    delay;
    IO0CLR|=bit(10);               //en=0
}



int check_palindrome(unsigned char* str){
unsigned int i=0;
unsigned char *temp;
temp=str;    
    while(*str!='\0')
     { 	
				i++;
				str++;
     }
     for(int j=0;j<i/2;j++)
     { 
				if(*(temp+j)!=*(temp+i-j-1)) 
						return 0;
     }
     return 1;
}




void string(unsigned char *p)
{
    while(*p!='\0') {
        dat(*p++);
    }
}



void test1()
{
        IO0DIR|=0XFFF;
    lcd_int();
    cmd(0x80);
        char str[]="malayalam";//change string value to test .
        int c=check_palindrome(str);
        delay
				while(1)
					if(c) string("Is a palindrome ");
					else string("Not palindrome ");
							
}

void test2()
{     
    IO0DIR|=0XFFF;
    IO1DIR|=0X00010000;
    lcd_int();
    cmd(0x80);
    string("Diwali!!");
    delay
    while(1)
       if(IO1PIN & (0x00010000)) 
				 string("1");
}    

