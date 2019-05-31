#include<reg51.h>
#define sm P2

void delay(unsigned int i)
{
	unsigned int j;
	for(j=0;j<=i;j++);
	}

	void main()
	{
		int i;
		for(i=1;i<=13;i++)
		{
			sm=0x01;
			delay(50000);
			sm=0x02;
			delay(50000);
			sm=0x04;
			delay(50000);
			sm=0x08;
			delay(50000);
		}
		while(1);
	}