      #include <reg52.h>
      #include <1602.h>
      int i=0;
      //���Ϳ��Բ����жϣ�����һ�����ж�
      void uart_init()
      { SCON=0x50;   //���ڷ�ʽ1
        TMOD=0X20;  TH1=0x1D; TL1=0x1D;  TR1=1; 
        //137.5BPS���������9600bps����lcd��ʾ�����ԭ�򣺲�����̫�ߣ�ÿ�����ַ�֮��ķ��ͼ���̣���lcd��ʾ������Ҫһ����ִ��ʱ��(���ڷ��ͼ��)����ɽ��շ�©���ַ�
        ES=1; EA=1;  //�����ж�
      }
     main()
     { //���ڳ�ʼ��
       uart_init();
       LCD_Init(); // LCD��ʼ��
       while(1);   //�ȴ��������ݣ��ٰ�������ʾ��lcd       
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
          }  //����һ���ַ���ʾһ���ַ�
          if(i==4)   
          {i=0;}      
     }


     
     
