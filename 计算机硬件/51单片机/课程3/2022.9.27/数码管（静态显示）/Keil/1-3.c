#include"reg51.h"//reg�Ĵ�����51---51��Ƭ��

unsigned char s[]={0x3f,0x06,0x58,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};//������0��9

void delay(unsigned int n)
{
	unsigned int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<120;j++)
		;
	}
}

void seg()
{
	unsigned int i=0;
	for(i=0;i<10;i++)
	{
		P2=~s[i];
		delay(1000);//1000������ӳ�
		//P2=0x3F;//0001 1111
	}
	
}


//������
//void seg()
//{
//	unsigned int i=0;
//	for(i=0;i<10;i++)
//	{
//		P2=s[i];
//		delay(1000);//1000������ӳ�
//		//P2=0x3F;//0001 1111
//	}
//	
//}

void main()
{
	while(1)
	{
		seg();
	}
}