#include<reg51.h>

void trans() interrupt 4
{
	unsigned char i,x[]= "HELLO";
	for(i=0;x[i]!='\0';i++)
	{
		SBUF=x[i];
}
}
void main()
{
	TCON=0x10;
	TR1=1;
	IE=0x88;
	while(1);
}

