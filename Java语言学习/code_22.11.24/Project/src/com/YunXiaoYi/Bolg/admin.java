package com.YunXiaoYi.Bolg;

public class admin extends Person {

    @Override
    public void show()
    {
        System.out.println("admin的信息："+getName()+","+getAge());
    }



}
