#include<reg51.h>

void main()
{

	TMOD=0X05;
	TH0=0;
	TL0=0;
	TR0=1;
		while(1)
	{
		do
		{
			P2=TH0;
			P1=TL0;
		}while(TF0==0);
	TR0=0;
	TF0=0;
}
	}