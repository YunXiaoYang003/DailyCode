      #include <reg52.h>
      #include <uart.h>
      #include <delay.h>
      void DelayMs(unsigned char t);
      //���Ϳ��Բ����жϣ�����һ�����ж�
      void uart_init()
      { SCON=0x50;   //���ڷ�ʽ1  
        TMOD=0X20;  TH1=0x1D; TL1=0x1D;  TR1=1; //137.5BPS
      }
     main()
     { //���ڳ�ʼ��
       char name[]={"name"};
       char i;
       uart_init();
       while(1)
       {
       SendStr(name); 
       for(i=0;i<5;i++) //��������1s
       DelayMs(250);
       }  
     }
     
     
