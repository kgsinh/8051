#include<reg51.h>
#define lcd P2
sbit rs=P2^0;
sbit en=P2^1;

void delay(unsigned int i)
{
	unsigned int j;
	for(j=0;j<=i;j++);
}

void cmd(unsigned char y)
{
	rs=0;
	lcd&=0x0f;
	lcd|=(y&0xf0);
	en=1;
	delay(1000);
	en=0;
	lcd&=0x0f;
	lcd|=((y<<4)&0xf0);
	en=1;
	delay(1000);
	en=0;
}

void dat(unsigned char y)
{
	rs=1;
	lcd&=0x0f;
	lcd|=(y&0xf0);
	en=1;
	delay(1000);
	en=0;
	lcd&=0x0f;
	lcd|=((y<<4)&0xf0);
	en=1;
	delay(1000);
	en=0;
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
	cmd(0x02);
	cmd(0x28);
	cmd(0x01);
	cmd(0x06);
	cmd(0x0c);
	cmd(0x80);
	display("Hello");
	while(1);
}
	