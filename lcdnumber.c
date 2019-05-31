#include<reg51.h>
#define lcd P2
sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;

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

void main()
{
	int i=567,a,b,c;
	cmd(0x80);
	cmd(0x01);
	cmd(0x0c);
	cmd(0x38);
	cmd(0x06);
	a=i%10;
	i=i/10;
	b=i%10;
	c=i/10;
	cmd(0x80);
	dat(c+48);
	cmd(0x81);
	dat(b+48);
	cmd(0x82);
	dat(a+48);
	while(1);
}