#include<reg52.h>
#include"uart.h"
/*------------------------------------------------
                    发送一个字节
------------------------------------------------*/
void SendByte(unsigned char dat)
{
 SBUF = dat;
 while(!TI);
      TI = 0;
}
void SendStr(unsigned char *s)
{
 while(*s!='\0')// \0 表示字符串结束标志，
                //通过检测是否字符串末尾
  {
  SendByte(*s);
  s++;
  }
}
