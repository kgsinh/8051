#include<reg51.h>
#define sm P2

void delay(unsigned int i)
{
	unsigned int j;
	for(j=0;j<=i;j++);
}

void main()
{
	unsigned char x[]={0x01,0x02,0x04,0x08},i,j=0;
	for(i=1;i<=50;i++)
	{
		sm=x[j];
		j++;
		delay(50000);
		if(j==4)
		{
			j=0;
		}
	}
	while(1);
}