#include<reg51.h>
unsigned char x[]="HELLO",i=0;

void serial() interrupt 4
{
	if(TI==1)
	{
		TI=0;
		i++;
		if(x[i]!='\0')
		{
			SBUF=x[i];
		}
	}
}

void main()
{
	TMOD=0x20;
	TH1=-3;
	SCON=0x40;
	TR1=1;
	SBUF=x[i];
	IE=0x90;
	while(1);
	}
	