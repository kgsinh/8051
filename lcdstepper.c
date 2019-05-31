#include<reg51.h>
#define lcd P2
#define sm P1
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

void display(unsigned char y[])
{
	unsigned char i;
	cmd(0x80);
	for(i=0;y[i]!='\0';i++)
	{
		dat(y[i]);
	}
	
void main()
{ 
	float f;
	unsigned char z[20],x[]={0x01,0x02,0x04,0x08},i,j=0,;
	cmd(0x01);
	cmd(0x06);
	cmd(0x0c);
	cmd(0x38);
	cmd(0x80);
	
	for(i=0;i<=50;i++)
	{
		sm=x[j];
		j++;
		delay(30000);
		f=i*1.8;
		sprintf(z,"Angle=%0.2f",f);
		display(z);
		if(j==4)
		{
			j=0;
		}
	}
	while(1);
}

