#include"reg51.h"

unsigned char str[]={0x76,0x79,0x38,0x38,0x3f};
unsigned char wei[]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};

void delay(unsigned int n)
{
	unsigned int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<120;j++)
		;
	}	
}

void seg()
{
	unsigned int i=0;
	for(i=0;i<5;i++)
	{
		P3=~wei[i];
		P2=str[i];
		delay(5);
	}
}	

void main()
{
	while(1)
	{
		seg();
	}	
}