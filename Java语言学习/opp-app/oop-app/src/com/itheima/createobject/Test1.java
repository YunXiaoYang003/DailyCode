package com.itheima.createobject;

//学会设计对象并使用

public class Test1 {
    public static void main(String[] args) {
        //创建汽车对象
        Car c=new Car();
        c.name="宝马";
        c.price=38.9;
        System.out.println(c.name);
        System.out.println(c.price);
        c.start();
        c.run();


        System.out.println("----------");
        Car c2=new Car();
        c2.name="宝马";
        c2.price=39.9;
        System.out.println(c2.name);
        System.out.println(c2.price);
        c2.start();
        c2.run();

        System.out.println(c);
        System.out.println(c2);
    }
}
