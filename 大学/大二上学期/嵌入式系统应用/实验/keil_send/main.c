#include<reg51.h>
#include<uart.h>

typedef unsigned int u16;	  //���������ͽ�����������
typedef unsigned char u8;


void main()
{
	//1.���ڳ�ʼ��  9600bps  ���ڷ�ʽ1
	TMOD=0X20;
	TH1=0XFD;
	TL1=0xFD;
	TR1=0XFD;
	SCON=0X40;
	
	 
	//2.��������
	SendStr("name");
}