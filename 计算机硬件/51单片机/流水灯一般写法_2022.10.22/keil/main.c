#include"reg51.h"

unsigned char leddata[]={0X01,0X02,0X04,0X08,0X10,0X20,0X40,0x80};


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
		P2=~leddata[i];
		delay(100);
	}
}
		

void main()
{
	while(1)
	{
		led();
	}
}