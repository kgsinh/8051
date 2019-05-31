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
	int a,b,c,i,j,k;
	while(1)
	{
		for(i=0;i<=999;i++)
		{
		a=i%10; 
		j=i/10; 
		b=j%10; 
		c=j/10;
		for(k=0;k<=10;k++)
		{
		num=0x06;
		display(a);
		delay(1000);
		num=0x05;
		display(b);
		delay(1000);
		num=0x03;
		display(c);
		delay(1000);
		}
	}
 }
}		
