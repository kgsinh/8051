#include<reg51.h>
sbit a=P2^0;
sbit b=P2^1;

void main()
{
	while(1)
	{
		a=1;
		b=0;
	}
}
