#include<lpc214x.h>

#define bit(x) (1<<x)
#define delay for(int i=0;i<1000;i++);



void lcd_init();
void dat(unsigned char);
void cmd(unsigned char);
void string(unsigned char *p);
int palindrome(unsigned char *, int);
int my_strlen(char *);