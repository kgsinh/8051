#include<reg51.h>
#include<string.h>

void delay(unsigned char i)
{
	unsigned char j;
	for(j=0;j<=i;j++);
}

void main()
{
	unsigned char x[10],i=0;
	TMOD=0x20;
	TH1=-3;
	SCON=0x50;
	TR1=1;
	while(1)
	{
		do
		{
			if(strncmp(x,"blink",5)==0)
			{
				P2=0xff;
				delay(30000);
				P2=0x00;
				delay(30000);
		    i=0;
			}
     if(strncmp(x,"toggle",6)==0)
			{
				P2=0x55;
				delay(30000);
				P2=0xaa;
				delay(30000);
		    i=0;
			}				
			}while(RI==0);
		x[i]=SBUF;
	  RI=0;
		i++;
		}
	}
