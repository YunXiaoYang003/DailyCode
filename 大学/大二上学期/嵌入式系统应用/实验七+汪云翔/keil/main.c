#include<reg51.h>
#define uchar unsigned char
#define uint unsigned int
#define OUT P2

sbit pos = P1^0;						
sbit neg = P1^1;					
	


uint TIME;

uchar code turn[] = {0x02,0x06,0x04,0x0c,0x08,0x09,0x01,0x03};			//步进电机脉冲组

void main()
{
  uchar a;
	
  OUT = 0x03;

	TMOD = 0x01;	    
  TH0 = 0x3c;		      
  TL0 = 0xb0;		  
  EA = 1;			       												  
  ET0 = 1;		       
  TR0 = 1;		        

	
	while(1)
	{
		if (pos&&neg) TIME=0;			
		if (!pos)               
		{
			if (TIME==2)
			{
							
				a = a<8?a+1:0;
				OUT = turn[a];
				TIME = 0;
			}
		}
				
		if (!neg)					
		{
			if (TIME==2)
			{
							
				a = a>0?a-1:7;
				OUT = turn[a];
				TIME = 0;
			}
				
		}
	
   }		   			
}


void timer()interrupt 1	 //T0中断程序
{
   TH0=0x3c;				 //重新赋值--循环一次时间为5ms
   TL0=0xb0;
   TIME++;					 //循环次数加一
}

