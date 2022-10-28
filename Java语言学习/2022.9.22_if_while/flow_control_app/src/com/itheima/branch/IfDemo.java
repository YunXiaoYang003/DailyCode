package com.itheima.branch;

public class IfDemo {
    public static void main(String[] args) {
        //需求：60——100之间是正常的，否则系统提示进一步检查
        //格式1：
        int heartBeat=30;
        if(heartBeat<60||heartBeat>100)
        {
            System.out.println("你的心跳是："+heartBeat+",你可能需要进行进一步检查！");
        }
        System.out.println("检查结束！");
        //格式二:
        int money=5999;
        if(money>=1314)
        {
            System.out.println("当前发送成功！");
        }
        else
            System.out.println("余额不足");
        //格式三:

    }
}
