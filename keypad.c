#include<reg51.h>
#define lcd P3
sbit rs=P3^0;
sbit en=P3^1;
sbit r1=P2^0;
sbit r2=P2^1;
sbit r3=P2^2;
sbit r4=P2^3;
sbit c1=P2^4;
sbit c2=P2^5;
sbit c3=P2^6;
sbit c4=P2^7;

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
	cmd(0x80);
	for(i=0;z[i]!='\0';i++)
	{
		dat(z[i]);
	}
}

void col1()
{
	r1=r2=r3=r4=1;
	r1=0;
	if(c1==0)
	display("zero     ");
	r1=1;
	r2=0;
	if(c1==0)
		display("four     ");
	r2=1;
	r3=0;
	if(c1==0)
		display("eight      ");
  r3=1;
	r4=0;
		if(c1==0)
		display("C        ");
		r4=1;
}

void col2()
{
	r1=r2=r3=r4=1;
	r1=0;
	if(c2==0)
	display("one     ");
	r1=1;
	r2=0;
	if(c2==0)
		display("five     ");
	r2=1;
	r3=0;
	if(c2==0)
		display("nine      ");
  r3=1;
	r4=0;
		if(c2==0)
		display("D        ");
		r4=1;
}

void col3()
{
	r1=r2=r3=r4=1;
	r1=0;
	if(c3==0)
	display("two     ");
	r1=1;
	r2=0;
	if(c3==0)
		display("six     ");
	r2=1;
	r3=0;
	if(c3==0)
		display("A      ");
  r3=1;
	r4=0;
		if(c3==0)
		display("E        ");
		r4=1;
}

void col4()
{
	r1=r2=r3=r4=1;
	r1=0;
	if(c4==0)
	display("three     ");
	r1=1;
	r2=0;
	if(c4==0)
		display("seven     ");
	r2=1;
	r3=0;
	if(c4==0)
		display("B          ");
  r3=1;
	r4=0;
		if(c4==0)
		display("F        ");
		r4=1;
}
	
void main()
{
	cmd(0x02);
	cmd(0x28);
	cmd(0x01);
	cmd(0x06);
	cmd(0x0c);
	cmd(0x80);
	c1=c2=c3=c4=1;
	while(1)
	{
		r1=r2=r3=r4=0;
		if(c1==0)
			col1();
		else if(c2==0)
			col2();
		else if(c3==0)
			col3();
		else if(c4==0)
			col4();
}
	}
	