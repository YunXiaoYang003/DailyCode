#include"reg51.h"

unsigned char s[]={0x3f,0x06,0x58,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};//共阴极0至9
unsigned char count=0,num=0;

void display()
{
	P2=s[num];
	if(num==10)
		num=0;
}


void InitTime()
{
	TMOD=0x01;//0000 0001
	TH0=(65536-50000)/256 ;//50ms=50000us,256=2^8,意味着初值移动8位,65536us
	TL0=(65536-50000)%256;
	ET0=1;//开启定时器的中断
	EA=1;//开启总中断
	TR0=1;//启动定时器0
	
}


void main()
{
	InitTime();
	while(1)
	{
		display();
	}
}

//0表示外部中断，1表示定时器中断0,2表示外部中断1,3表示定时中断1,4表示串口中断
void time_isr() interrupt 1
{
	TH0=(65536-50000)/256 ;//50ms=50000us,256=2^8,意味着初值移动8位,65536us--->>>1s(50ms*20)
	TL0=(65536-50000)%256;
	count++;
	if(count==20)
	{
		num++;
		count=0;
	}
}



