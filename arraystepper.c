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
	unsigned char x[]={0x01,0x02,0x04,0x08};
	while(1)
	{
	for(i=0;i<4;i++)
	{
		sm=x[i];
		delay(50000);
	}
  }
}