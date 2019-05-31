#include<reg51.h>

void delay()
{
	TMOD=0X02;
	TH0=-184;
	TR0=1;
	while(TF0==0);
	TR0=0;
	TF0=0;
}

void main()
{
	while(1)
	{
		P2=0xff;
		delay();
		P2=0x00;
		delay();
	}
}