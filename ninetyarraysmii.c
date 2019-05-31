#include<reg51.h>
#define sm P2

void delay(unsigned int i)
{
	unsigned int j;
	for(j=0;j<=i;j++);
}

void main()
{
	unsigned int x[]={0x01,0x02,0x04,0x08},i,j;
	for(i=1;i<=13;i++)
	{
		for(j=0;j<4;j++)
		{
		sm=x[j];
		delay(50000);
	  }
	}
while(1);
}