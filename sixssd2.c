#include<reg51.h>
#define ssd P2
#define num P3

void delay(unsigned int i)
{
	unsigned int j;
	for(j=0;j<=i;j++);
}

void display(unsigned char i)
{
	unsigned char x[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x47,0x7F,0x6F};
	ssd=x[i];
}

void main()
{
	int a,b,c,i,j,w,x,y,z;

		for(i=999;i>=0;i--)
		{
		a=i%10; //9
		j=i/10; //99
		b=j%10; //9
		c=j/10;//9
		num=0x30;
		display(a);
		delay(10000);
		num=0x28;
		display(b);
		delay(10000);
		num=0x18;
		display(c);
		delay(10000);	
		
		z=999-i;
    w=z%10; 
    x=z/10;
		y=x%10;
    z=x%10;
num=0x06;
display(w);
delay(10000);
num=0x05;
display(y);
delay(10000);
num=0x03;
display(z);
delay(10000);
	}
}
	