#include<reg51.h>
#define lcd P2
sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;
sbit sw=P3^3;

void delay(unsigned int j)
{
	unsigned int i;
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

void dat(unsigned int y)
{
	lcd=y;
	rs=1;
	rw=0;
	en=1;
	delay(1000);
	en=0;
}

void count()
{
	unsigned int a,b,k;
	TMOD=0x05;
	TH0=0xFF;
	TL0=0xD2;
	TR0=0;
	while(TF0==0)
	{
		for(k=1;k<=46;k++)
		{
			a=k%10;
			b=k/10;
			cmd(0x80);
			display(a+48);
			delay(500);
			display(b+48);
			delay(500);
		}
	}
}

void display(unsigned char z[])
{
	unsigned char i;
	for(i=0;z[i]!='\0';i++)
	{
		dat(z[i]);
	}
}

void main()
{
	cmd(0x01);
	cmd(0x06);
	cmd(0x0c);
	cmd(0x38);
	cmd(0x80);
	count();
}