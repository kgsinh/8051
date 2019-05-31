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
	unsigned char x[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x47,0x7F,0x6F};
	ssd=x[i];
}

void main()
{
	int a,b,c,i;
	while(1)
	{
		i=567;
		a=i%10; //7
		i=i/10; //56
		b=i%10; //6
		c=i/10; //5
		num=0x06;
		display(a);
		delay(500);
		num=0x05;
		display(b);
		delay(500);
		num=0x03;
		display(c);
		delay(500);
	}
}
		