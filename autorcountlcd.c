#include<stdio.h>
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

void display(unsigned char z[])
{
	unsigned char i;
	cmd(0x80);
	for(i=0;z[i]!='\0';i++)
	{
		dat(z[i]);
	}
}

void main()
{
	int y;
	char z[20];
	cmd(0x01);
	cmd(0x06);
	cmd(0x0c);
	cmd(0x38);
	cmd(0x80);
	
	TMOD=0x06;
	TH0=0;
	TR0=1;
	while(1)
	{
	do
	{
		y=TL0;
		sprintf(z,"count=%d",y);
		display(z);
	}while(TF0==0);
	TR0=0;
	TF0=0;
}
	}