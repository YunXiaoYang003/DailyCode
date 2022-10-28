#include"reg51.h"

sbit LED0=P2^0;

void delay(unsigned int n)
{
	unsigned i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<120;j++)
		;
	}
}

//共阳极
void led1()
{
	int i=0;
	for(i=0;i<8;i++)
	{
		P2=~(0x01<<i);//0000 0001 ->0000 0010 ->0000 0100
		delay(50);
	}
	
}


//共阴极
void led2()
{
	int i=0;
	for(i=0;i<8;i++)
	{
		P1=(0x01<<i);
		delay(50);
	}
}	

void main()
{
	while(1)
	{
		led1();
		led2();
//		LED0=0;
//		delay(5);
//		LED0=1;
//		delay(5);
	}
}