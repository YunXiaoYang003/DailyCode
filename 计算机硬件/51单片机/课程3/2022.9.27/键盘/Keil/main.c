#include"reg51.h"//reg寄存器，51---51单片机

sbit key0=P1^0;

unsigned char s[]={0x3f,0x06,0x58,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};//共阴极0至9，
//0011 1111 -> 0000 0110 ->......
//数码管  dp g f e    d c b a

unsigned char num=0,flag=0;

void delay(unsigned int n)
{
	unsigned int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<120;j++)
		;
	}
}
void key()
{
//	if(key0==0)
//	{
//		delay(200);
//		if(key0==0)
//		num++;
//	}
	if(key0==0&&flag==0)
	{
		flag=1;
	}
	if(flag==1&&key0==1)
	{
		num++;
		flag=0;
	}
}
	
void seg()
{
	P2=s[num];	
	if(num==10)
	{
		num=0;
	}
}


void main()
{
	while(1)
	{
		key();
		seg();
	}
}