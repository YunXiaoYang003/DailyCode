      #include <reg52.h>
      #include <uart.h>
      #include <delay.h>
      void DelayMs(unsigned char t);
      //发送可以不用中断，接收一般用中断
      void uart_init()
      { SCON=0x50;   //串口方式1  
        TMOD=0X20;  TH1=0x1D; TL1=0x1D;  TR1=1; //137.5BPS
      }
     main()
     { //串口初始化
       char name[]={"name"};
       char i;
       uart_init();
       while(1)
       {
       SendStr(name); 
       for(i=0;i<5;i++) //发送周期1s
       DelayMs(250);
       }  
     }
     
     
