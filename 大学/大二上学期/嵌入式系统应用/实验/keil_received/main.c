#include<reg51.h>
#include<1602.h>
#include<delay.h>

unsigned int temp=0;

void main()
{
	//1.串口初始化  9600bps  串口方式1
	TMOD=0X20;
	TH1=0XFD;
	TL1=0xFD;
	TR1=0XFD;
	SCON=0X50;
	REN=1;
	//接收数据时，需要用串口中断
	ES=1;
	EA=1;
	 
	//2.LCD初始化
	LCD_Init();
	
	//3.等待串口接收数据并显示
	while(1);
}
void serial() interrupt 4
{
	if(RI)//接收数据
	{
		temp=SBUF;
		RI=0;
	}
	LCD_Write_Char(0,0,temp);//显示	
}