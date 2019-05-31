#include<reg51.h>
#define sm P2

void delay(unsigned int i)
{
	unsigned int j;
	for(j=0;j<=i;j++);
}

void main()
{
	while(1)
	{
		sm=0x11;
		delay(50000);
		sm=0x22;
		delay(50000);
		sm=0x44;
		delay(50000);
		sm=0x88;
		delay(50000);
	}
}
		