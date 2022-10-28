#include"reg51.h"

sbit led=P2^0;

unsigned char count=0,	T=65536-123;


void InitTime()
{
	TMOD=0x01;//0000 0001
	TH0=(65536-T)/256 ;//256=2^8,意味着初值移动8位,65536us
	TL0=(65536-T)%256;
	ET0=1;//开启定时器的中断
	EA=1;//开启总中断
	TR0=1;//启动定时器0
	
}


void main()
{
	InitTime();
	while(1);
}


void time_isr() interrupt 1
{
	TH0=(65536-T)/256 ;
	TL0=(65536-T)%256;
	count++;
	if(count==60)//60次中断
	{
		count=0;
		led=~led;
	}
}
