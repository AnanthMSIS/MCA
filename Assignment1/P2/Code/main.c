#include <lpc214x.h>
#define bit(x) (1<<x)

int main()
{
	IO0DIR = 0x0000000F;
	while(1)
	{
		if((IO0PIN && bit(4)) == 0)
			IO0SET = bit(1);
		else
			IO0CLR = bit(1);
	}
	return 0;
}
