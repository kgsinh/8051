#include<reg51.h>
int i=0;

void ext0() interrupt 0
{
	P2=i;
	i++;
}

void main()
{
	P2=0x00;
	IE=0x81;
	while(1);
}

