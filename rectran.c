#include<reg51.h>

void trans(unsigned char y)
{
	SBUF=y;
	while(TI==0);
	TI=0;
}
void main()
{
	unsigned char y;
	TMOD=0x20;
	TH1=-3;
	SCON=0x50;
	TR1=1;
	while(1)
	{
	while(RI==0);
		y=SBUF;
	  RI=0;
		if(y=='A')
		{
			trans('B');
		}
		if(y=='C')
		{
			trans('D');
		}
		if(y=='E')
		{
			trans('F');
		}
	}
}