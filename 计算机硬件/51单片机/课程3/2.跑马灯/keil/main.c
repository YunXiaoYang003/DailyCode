#include"REG51.h"

void delay(unsigned int t)
{
	unsigned char i;
	for(;t>0;t--)
	{
		for(i=100;i>0;i--);
	}
}
	
void main(void)
{
	p1=0x55;
	p1=0xFE;
	
	
	unsigned char i;
	while(1)
	{
		for(i=0;i<8;i++)
		{
			P2=~(0x01 << i);
			delay(30);
		}
		
	}
}