#include"REG51.h"

sbit key1=p1^6;
sbit key2=p1^7;
sbit LED=p1^0;

//void delay(unsigned int t)
//{
//	unsigned char i=0;
//	for(;t>0;t--)
//	{
//		for(i=100;i>0;i--);
//	}
//}

void main(void)
{
	unsigned char i,j;
	P0=0x55;

	while(1)
	{
		i=P3;
		P2 = ~i;
		j=key1;
		LED=j;
	}
	
}