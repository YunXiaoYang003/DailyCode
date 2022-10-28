#include<reg51.h>
#include<uart.h>

typedef unsigned int u16;	  //对数据类型进行声明定义
typedef unsigned char u8;


void main()
{
	//1.串口初始化  9600bps  串口方式1
	TMOD=0X20;
	TH1=0XFD;
	TL1=0xFD;
	TR1=0XFD;
	SCON=0X40;
	
	 
	//2.发送数据
	SendStr("name");
}