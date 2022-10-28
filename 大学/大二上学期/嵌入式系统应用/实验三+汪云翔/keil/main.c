#include<reg51.h>  

#define uchar unsigned char		
#define uint unsigned int

#define LcdDB P0// 数据端口

uchar  code table1[] = "2021051123";	  //定义数组
uchar  code table2[] = "Wang YunXiang";

uchar *str1 = table1;	
uchar *str2 = table2;	  //数组名表示数组首元素的地址
//函数声明
 void LcdBusy();
 void LcdWrCmd(uchar Cmd);
 void LcdWrDat(uchar Dat);
 void Lcd_Init();
 void Lcd_Show(uchar x, uchar y);  
/ 定义引脚
sbit LcdRS = P2^2;   
sbit LcdRW = P2^1; 
sbit LcdE = P2^0;	 /

//判忙函数
void LcdBusy()		  
{

	uchar temp;

	LcdDB = 0xff;  
	LcdRS = 0;  
	LcdRW = 1;	 

	do{
	
		LcdE = 1;		 
		temp = LcdDB;  
		LcdE = 0;		  
		
	}while(temp & 0x80);  
}


void LcdWrCmd(uchar Cmd)	
{

	LcdBusy();  
	LcdRS = 0;    
	LcdRW = 0;  
	LcdDB = Cmd;  
	LcdE = 1;
	LcdE = 0;	  
}

//写数据函数
void LcdWrDat(uchar Dat)	
{
	LcdBusy();  
	LcdRS = 1; 
	LcdRW = 0;  
	LcdDB = Dat;  
	LcdE = 1;
	LcdE = 0;	  	
}

//初始化函数
void Lcd_Init()		   
{
	LcdWrCmd(0x01); 
	LcdWrCmd(0x06); 
	LcdWrCmd(0x0c); 
	LcdWrCmd(0x38); 
}


 //定位函数
void Lcd_Show(uchar x, uchar y)		
{
	uchar addr;			
	if(0==y)			  
		{
		addr = 0x00 + x;	 
		}
	else
	
		addr = 0x40+x;		
		LcdWrCmd(addr|0x80);  
		
}


void main()
{	
	Lcd_Init();  
	Lcd_Show(0,0);	
    while(*str1 !='\0')	 
	{			
	LcdWrDat(*str1++) ;		
	}

	Lcd_Show(0,1);	
    while(*str2!='\0')
	{			
	LcdWrDat(*str2++) ;	
	}
	while(1)
	{	  }
	
}

