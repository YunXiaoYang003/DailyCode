//nclude<reg51.h>//ȥϵͳĬ�ϵ�·������ͷ�ļ����Ƽ�ʹ�õڶ���
#include"reg51.h"//��ȥ�����û��Զ����·�����ң���ȥϵͳĬ�ϵ�·������

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
	while(1)//��ѭ������֤���򲻶�����
	{
		led();
	}
}
