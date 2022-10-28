#include"reg51.h"

unsigned char s[]={0x3f,0x06,0x5B,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};//¹²Òõ¼«0ÖÁ9
unsigned char num=0;

void initcounter()
{
	TMOD=0x06;//0000 0110
	TH0=256-3;
	TL0=256-3;
	ET0=1;
	EA=1;
	TR0=1;
}

void display()
{
	P2=s[num];
	if(num==10)
	{
		num=0;
	}
}
void main()
{
	initcounter();
	while(1)
	{
		display();
	}
}

void counter_isr() interrupt 1
{
	num++;
}