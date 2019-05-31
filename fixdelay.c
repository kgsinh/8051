#include<reg51.h>
#define led P2


void delay()
{
	TMOD=0x01;
	TH0=0xFF;
	TL0=0xE0;
	TR0=1;
	while(TF0==0);
	TF0=0;
	TR0=0;
}

void main()
{
	while(1)
	{
		P2=0xFF;
		delay();
		P2=0x00;
		delay();
	}
}