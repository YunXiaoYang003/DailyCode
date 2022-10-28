#include<reg52.h>
#include<delay.h>
#include<18b20.h>
#include<1602.h>


//主程序
void main()
{
	LCD_Init();//LCD初始化
	Init_time();
	Init_DS18B20();//DS18B20初始化
	while(1)
	{
	if(s1==0||s1[num]>=1)
	{
		keyscan();
		TR0 = 0;
		D1 = 1;
		D2 = 1;
	}//按键扫描
	else
	{
		
		ReadTemperature();//读取温度值
		write_temp_value(0,temp_value);//LCD显示温度值
		comp();
	}
	}
}