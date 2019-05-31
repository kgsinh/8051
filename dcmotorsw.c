#include<reg51.h>
#define lcd P2
sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;
sbit a=P3^3;
sbit b=P3^4;
sbit sw1=P3^5;
sbit sw2=P3^6;

void delay(unsigned int i)
{
	unsigned int j;
	for(j=0;j<=i;j++);
}

void cmd(unsigned char y)
{
	lcd=y;
	rs=0;
	rw=0;
	en=1;
	delay(1000);
	en=0;
}

void dat(unsigned char y)
{
	lcd=y;
	rs=1;
	rw=0;
	en=1;
	delay(1000);
	en=0;
}

void display(unsigned char x[])
{
	unsigned int j;
	for(j=0;x[j]!='\0';j++)
	{
		dat(x[j]);
	}
}

void main()
{
	cmd(0x01);
	cmd(0x06);
	cmd(0x0c);
	cmd(0x38);
	cmd(0x80);
	while(1)
	{
		if(sw1==0 && sw2==1)
		{
			a=1;
			b=0;
			cmd(0x80);
			display("Forward");
		}
		else if(sw2==0 && sw1==1)
		{
			a=0;
			b=1;
			cmd(0x80);
			display("Reverse");
		}
		else
		{
			a=1;
			b=1;
			cmd(0x80);
			display("Stop     ");
		}
	}
}
	