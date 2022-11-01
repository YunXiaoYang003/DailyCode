#include <reg51.h>
#include <delay.h>
#include <18b20.h>
#include <1602.h>


void main()
{ unsigned int temp,temp_; 
  float t;
  int i; 
  LCD_Init(); 
  while(1)
  {
     temp=ReadTemperature();  //采集一次温度值
	 while(temp>0x00)
	 {
		 int temp_=temp/16;
	 }
	 temp_*=16;
	 if(temp_==0x0F)
	 {		 
      t=(~temp+1)*0.0625; //-20.0625
	  //t=temp*0.0625; //20.0625
	  LCD_Write_Char(0,0,'-');
      LCD_Write_Char(1,0,t/10+'0'); //shiwei
	  LCD_Write_Char(2,0,(int)t%10+'0');
	  LCD_Write_Char(3,0,'.');
	  LCD_Write_Char(4,0,(int)(t*10)%10+'0');//'0'为了显示
      LCD_Write_Char(5,0,(long int)(t*100)%10+'0');//'0'为了显示
	  LCD_Write_Char(6,0,(long)(t*1000)%10+'0');//'0'为了显示
	  LCD_Write_Char(7,0,(long)(t*10000)%10+'0');//'0'为了显示
	 }
	 if(temp==0x00)
	 {
	  t=temp*0.0625; //20.0625
	  LCD_Write_Char(0,0,'+');
      LCD_Write_Char(1,0,t/10+'0'); //shiwei
	  LCD_Write_Char(2,0,(int)t%10+'0');
	  LCD_Write_Char(3,0,'.');
	  LCD_Write_Char(4,0,(int)(t*10)%10+'0');//'0'为了显示
      LCD_Write_Char(5,0,(long int)(t*100)%10+'0');//'0'为了显示
	  LCD_Write_Char(6,0,(long)(t*1000)%10+'0');//'0'为了显示
	  LCD_Write_Char(7,0,(long)(t*10000)%10+'0');//'0'为了显示
	 }
     for(i=0;i<100;i++)
     {DelayMs(100);}//延时10s=100ms*100
  }
 }
