#include"reg51.h"

sbit LED0=P2^0;

void delay(unsigned int n)
{
	unsigned int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<120;j++)
		;
	}
}

void led()
{
	int i=0;
	for(i=0;i<8;i++)
	{
		P1=(0X01<<i);//0000 0001 ->>0000 0010
		delay(50);
	}
}
		

void main()
{
	while(1)
	{
		led();
	}
}