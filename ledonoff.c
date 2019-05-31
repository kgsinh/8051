#include<reg51.h>
#define led P2

void delay(unsigned int i)
{
	int j;
	for(j=0;j<=i;j++);
}

void main()
{
	while(1)
	{
		led=0x55;
		delay(2000);
		led=0xAA;
		delay(2000);
	}
}