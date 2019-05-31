#include<reg51.h>

void main()
{
	unsigned char i,x[]="HELLO";
	TMOD=0x20;
	TH1=-3;
	SCON=0x40;
	TR1=1;
	for(i=0;x[i]!='\0';i++)
	{
	SBUF=x[i];
	while(TI==0);
	TI=0;
	}
	while(1);
}