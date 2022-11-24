package com.YunXiaoYi.Bolg;

public class Teacher extends Person{
    @Override
    public void show()
    {
        System.out.println("教师的信息："+getName()+","+getAge());
    }
}
