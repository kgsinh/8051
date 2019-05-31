#include<reg51.h>

void timer1() interrupt 3
{
	P2=~P2;
	TH0=0x93;
	TL0=0xFF;
}

void main()
{
	TCON=0x10;
	TR1=1;
	IE=0x88;
	while(1);
}

