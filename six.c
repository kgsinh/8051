#include<reg51.h>
#define ssd P2
#define num P3

void delay(unsigned int i)
{
	unsigned int j;
	for(j=0;j<=i;j++);
}

void display(unsigned char k)
{
	unsigned char x[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x47,0x7F,0x6F};
	ssd=x[k];
}


void main()
{
	int a,b,c,i,j,w,x,y,z,h;
while(1)
{
	for(i=0;i<=999;i++)
	{
		a=i%10; 
		j=i/10; 
		b=j%10; 
		c=j/10;
			
	  z=999-i;
    w=z%10; 
    x=z/10;
		y=x%10;
    z=x/10;
			
		for(h=1;h<=10;h++)
    {			
		num=0x3E;	
		display(a);
		delay(500);
		num=0x3D;
		display(b);
		delay(500);
		num=0x3B;
		display(c);
		delay(500);
			
		num=0x37;
		display(w);
	  delay(500);
		num=0x2F;
		display(y);
		delay(500);
		num=0x1F;
		display(z);
		delay(500);
		}
  }
 }
}


