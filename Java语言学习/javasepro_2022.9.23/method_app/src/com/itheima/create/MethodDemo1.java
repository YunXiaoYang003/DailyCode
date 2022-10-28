package com.itheima.create;
//目标：能够说出使用方法的优点：1.效率 2.逻辑清晰
public class MethodDemo1 {
    public static void main(String[] args) {
        //张工
      /*  int a=10;
        int b=30;
        int c=a+b;
        System.out.println(c);*/
        int c=sum(20,30);
        System.out.println(c);
        //徐工
        int a1=10;
        int b1=30;
        int c1=a1+b1 ;
        System.out.println(c1);
    }
    public static  int sum(int a,int b)
    {
        int c=a+b;
        return c;
    }

}
