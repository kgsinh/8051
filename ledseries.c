#include<reg51.h>
#define led P2

void delay(unsigned int i)
{
	int j;
	for(j=0;j<=i;j++);
}

void main()
{
	while(1)
	{
	led=0x01;
	delay(20000);
	led=0x03;
	delay(20000);
	led=0x07;
	delay(20000);
	led=0x0F;
	delay(20000);
	led=0x1F;
	delay(20000);
	led=0x3F;
	delay(20000);
	led=0x7F;
	delay(20000);
	led=0xFF;
	delay(20000);
  }
}