#include<reg51.h>
#define ssd P2
#define num P3

void delay(unsigned int i)
{
	unsigned int j;
	for(j=0;j<=i;j++);
}

void display(unsigned char i)
{
	unsigned char x[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x47,0x7F,0x6F};
	ssd=x[i];
}

void main()
{
	int i,a,b;
	while(1)
	{
		i=35;
		a=i%10;
		b=i/10;
		num=0x02;
		display(a);
		delay(500);
		num=0x01;
		display(b);
		delay(500);
	}
}