#include<reg51.h>
#define led P2

void delay(unsigned int i)
{
	int j;
	for(j=0;j<=i;j++);
}

void main()
{
	led=0x01;
	delay(20000);
	while(1)
	{
		led=led*2;
		delay(20000);
		if(led==0x80)
		{
			led=0x01;
			delay(20000);
		}
	}
}