#include<reg51.h>

void timer1() interrupt 3
{
	P2=~P2;
	TH1=0x93;
	TL1=0xFE;
}

void main()
{
	TMOD=0x10;
	TR1=1;
	IE=0x88;
	
	while(1);
}
