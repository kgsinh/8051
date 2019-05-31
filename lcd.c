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
	unsigned char x[]="HELLO WORLD",a,k;
	cmd(0x01);
	cmd(0x06);
	cmd(0x0C);
	cmd(0x38);
	cmd(0x80);
	for(k=0;k<=10;k++)
	{
		a=x[k];
		dat(a);
	}
	while(1);
}