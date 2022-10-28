#include"reg51.h"

sbit ex=P3^2;

unsigned char s[]={0x3f,0x06,0x5B,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};//¹²Òõ¼«0ÖÁ9
unsigned char num=0;

void initex()
{
	IT0=1;
	EX0=1;
	EA=1;
	ex=1;
}

void display()
{
	P2=s[num];
	if(num==10)
		num=0;
}

void main()
{
	initex();
	while(1)
	{
		display();
	}	
}

void ex_isr() interrupt 0
{
	num++;
}