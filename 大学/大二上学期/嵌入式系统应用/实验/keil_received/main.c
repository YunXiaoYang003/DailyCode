#include<reg51.h>
#include<1602.h>
#include<delay.h>

unsigned int temp=0;

void main()
{
	//1.���ڳ�ʼ��  9600bps  ���ڷ�ʽ1
	TMOD=0X20;
	TH1=0XFD;
	TL1=0xFD;
	TR1=0XFD;
	SCON=0X50;
	REN=1;
	//��������ʱ����Ҫ�ô����ж�
	ES=1;
	EA=1;
	 
	//2.LCD��ʼ��
	LCD_Init();
	
	//3.�ȴ����ڽ������ݲ���ʾ
	while(1);
}
void serial() interrupt 4
{
	if(RI)//��������
	{
		temp=SBUF;
		RI=0;
	}
	LCD_Write_Char(0,0,temp);//��ʾ	
}