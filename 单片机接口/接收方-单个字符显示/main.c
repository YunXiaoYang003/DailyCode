      #include <reg52.h>
      #include <1602.h>
      int i=0;
      //发送可以不用中断，接收一般用中断
      void uart_init()
      { SCON=0x50;   //串口方式1
        TMOD=0X20;  TH1=0x1D; TL1=0x1D;  TR1=1; 
        //137.5BPS，如果换成9600bps，则lcd显示会出错，原因：波特率太高，每两个字符之间的发送间隔短，而lcd显示函数需要一定的执行时间(大于发送间隔)，造成接收方漏接字符
        ES=1; EA=1;  //串口中断
      }
     main()
     { //串口初始化
       uart_init();
       LCD_Init(); // LCD初始化
       while(1);   //等待接收数据，再把数据显示到lcd       
       }
     void serial() interrupt 4
     {  
          char rxdata[4];        
          if(RI=1)
          { 
            
            rxdata[i]=SBUF;
            LCD_Write_Char(i,0,rxdata[i]);
            i++;  
            RI=0; 
          }  //接收一个字符显示一个字符
          if(i==4)   
          {i=0;}      
     }


     
     
