#include<reg51.h>
#define ssd P2

void delay(unsigned int i)
{
	int j;
	for(j=0;j<=i;j++);
}

void main()
{
	unsigned char s[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x47,0x7F,0x6F},k;
	while(1)
	{
		for(k=0;k<=9;k++)
		{
			ssd=s[k];
			delay(30000);
		}
	}
}