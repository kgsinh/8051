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
		sm=0x08;
		delay(50000);
		sm=0x04;
		delay(50000);
		sm=0x02;
		delay(50000);
		sm=0x01;
		delay(50000);
	}
}