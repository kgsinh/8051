#include<reg51.h>
#define ssd P2

void delay(unsigned int i)
{
	int j;
	for(j=0;j<=i;j++);
}

void main()
{
	while(1)
	{
		ssd=0x3F;
		delay(30000);
		ssd=0x06;
		delay(30000);
		ssd=0x5B;
		delay(30000);
		ssd=0x4F;
		delay(30000);
		ssd=0x66;
		delay(30000);
		ssd=0x6D;
		delay(30000);
		ssd=0x7D;
		delay(30000);
		ssd=0x47;
		delay(30000);
		ssd=0x7F;
		delay(30000);
		ssd=0x6F;
		delay(30000);
	}
}
		