package com.YunXiaoYi.Bolg;

public class Student extends Person{

    @Override
    public void show() {
        System.out.println("学生的信息："+getName()+","+getAge());
    }
}
