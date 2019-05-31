#include<reg51.h>
#define led P2

void delay(unsigned int i)
{
	int j;
	for(j=0;j<=i;j++);
}

void main()
{
	int k;
	while(1)
	{
		for(k=1;k<=128;k*=2)
		{
			led=0x01*k;
			delay(20000);
		}
	}
}
		