#include"reg51.h"

unsigned char s[]={0x3f,0x06,0x58,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};//������0��9
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
	TH0=(65536-50000)/256 ;//50ms=50000us,256=2^8,��ζ�ų�ֵ�ƶ�8λ,65536us
	TL0=(65536-50000)%256;
	ET0=1;//������ʱ�����ж�
	EA=1;//�������ж�
	TR0=1;//������ʱ��0
	
}


void main()
{
	InitTime();
	while(1)
	{
		display();
	}
}

//0��ʾ�ⲿ�жϣ�1��ʾ��ʱ���ж�0,2��ʾ�ⲿ�ж�1,3��ʾ��ʱ�ж�1,4��ʾ�����ж�
void time_isr() interrupt 1
{
	TH0=(65536-50000)/256 ;//50ms=50000us,256=2^8,��ζ�ų�ֵ�ƶ�8λ,65536us--->>>1s(50ms*20)
	TL0=(65536-50000)%256;
	count++;
	if(count==20)
	{
		num++;
		count=0;
	}
}



