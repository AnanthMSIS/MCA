#include <lpc214x.h>

unsigned int a[] = {0x133, 0x1b1, 0x12, 0x1b1};

int main()
{
	IO0DIR = 0xFFFFFFFF;
	IO1DIR = 0xFFFFFFFF;
	IO0SET |= (a[0]<<0);
	IO0SET |= (a[1]<<9);
	IO0SET |= (a[2]<<18);
	IO1SET |= (a[3]<<16);
}