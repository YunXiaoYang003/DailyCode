//nclude<reg51.h>//去系统默认的路径查找头文件，推荐使用第二种
#include"reg51.h"//先去查找用户自定义的路径查找，再去系统默认的路径查找

unsigned char leddat[]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};

void delay(unsigned int n)
{
	unsigned i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<120;j++);
	}
}

void led()
{
	unsigned i=0;
	for(i=0;i<8;i++)
	{
		P2=~leddat[i];
		delay(100);
	}
}


void main()
{
	while(1)//死循环，保证程序不断运行
	{
		led();
	}
}
