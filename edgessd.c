#include<reg51.h>
#define ssd P2
#define num P1
int a,b,i=0;

void delay(unsigned int i)
{
	unsigned int j;
	for(j=0;j<=i;j++);
}

void display(unsigned int i)
{
	unsigned char x[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x47,0x7f,0x6f};
	ssd=x[i];
	
}

void ext0() interrupt 0
{
	i++;
	if(i>99)
	{
		i=0;
	}
}

void main()
{
	while(1)
	{
		P2=0x00;
		a=i%10;
		b=i/10;
	  num=0x02;
		display(a);	
		delay(500);
		num=0x01;
		display(b);
		delay(500);
		TCON=0x01;
		IE=0x81;
}
	}