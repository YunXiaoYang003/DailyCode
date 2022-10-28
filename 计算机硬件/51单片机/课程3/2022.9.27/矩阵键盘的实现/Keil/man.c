#include"reg51.h"

unsigned char s[]={0x3f,0x06,0x58,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};//共阴极0至9
unsigned char num=99;

void delay(unsigned int n)
{
	unsigned int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<120;j++)
		;
	}
}
	

void key_scan()
{
	unsigned char temp0=0,temp1=0,temp=0;
	P1=0xf0;
	if(P1!=0xf0)//检测按键是否被按下
	{
		delay(20);
		temp0=P1;
		P1=0x0f;
		if(P1!=0x0f)
		{
			temp1=P1;
		}
	}
	temp=temp0+temp1;
	if(temp==0xee)
	{
		num=0;
	}
	if(temp==0xed)
	{
		num=1;
	}
}

void display()
{
	P2=s[num];
}
void main()
{
	while(1)
	{
		key_scan();//检测按键
		display();//显示
	}
}