#include"reg51.h"

sbit led=P2^0;

unsigned char count=0,	T=65536-123;


void InitTime()
{
	TMOD=0x01;//0000 0001
	TH0=(65536-T)/256 ;//256=2^8,��ζ�ų�ֵ�ƶ�8λ,65536us
	TL0=(65536-T)%256;
	ET0=1;//������ʱ�����ж�
	EA=1;//�������ж�
	TR0=1;//������ʱ��0
	
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
	if(count==60)//60���ж�
	{
		count=0;
		led=~led;
	}
}
