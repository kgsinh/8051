#include<reg51.h>
#define led P2

void delay(unsigned int i)
{
	int j;
	for(j=0;j<i;j++);
}

void main()
{
	while(1)
	{
		led=0xFF;
		delay(2000);
		led=0x00;
		delay(2000);
	}
}