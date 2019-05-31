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
		led=0x80;
		delay(10000);
		led=0x40;
		delay(10000);
		led=0x20;
		delay(10000);
		led=0x10;
		delay(10000);
		led=0x08;
		delay(10000);
		led=0x04;
		delay(10000);
		led=0x02;
		delay(10000);
		led=0x01;
		delay(10000);
	}
}