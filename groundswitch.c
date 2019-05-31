#include<reg51.h>
#define led P2
sbit SW=P3^0;

void delay(unsigned int i)
{
	int j;
	for(j=0;j<=i;j++);
}

void main()
{
	while(1)
	{
		if(SW==0) //press
		{
			led=0xFF;
			delay(10000);
			led=0x00;
			delay(10000);
		}
		else
		{
			led=0x00;
		}
	}
}