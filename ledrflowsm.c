#include<reg51.h>
#define led P2

void delay(unsigned int i)
{
	int j;
	for(j=0;j<=i;j++);
}

void main()
{
	int x;
	for(x=1;x<=8;x*=2)
	{
		led=0x80/x;
		delay(20000);
	}
	for(x=1;x<=8;x*=2)
	{
		led=0x08/x;
		delay(20000);
	}
}