#include<reg52.h>
#include<delay.h>
#include<18b20.h>
#include<1602.h>


//������
void main()
{
	LCD_Init();//LCD��ʼ��
	Init_time();
	Init_DS18B20();//DS18B20��ʼ��
	while(1)
	{
	if(s1==0||s1[num]>=1)
	{
		keyscan();
		TR0 = 0;
		D1 = 1;
		D2 = 1;
	}//����ɨ��
	else
	{
		
		ReadTemperature();//��ȡ�¶�ֵ
		write_temp_value(0,temp_value);//LCD��ʾ�¶�ֵ
		comp();
	}
	}
}