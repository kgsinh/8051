#include<reg51.h>

void main()
{
	TMOD=0x20;
	TH1=-3;
	SCON=0x40;
	TR1=1;
	SBUF='A';
	while(TI==0);
	TI=0;
	while(1);
}