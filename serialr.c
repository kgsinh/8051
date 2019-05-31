#include<reg51.h>

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
			P2=0x01;
		}
		else if(y=='B')
		{
			P2=0x02;
		}
		else if(y=='C')
		{
			P2=0x03;
		}
		else
		{
			P2=0x00;
	  }
	}
}