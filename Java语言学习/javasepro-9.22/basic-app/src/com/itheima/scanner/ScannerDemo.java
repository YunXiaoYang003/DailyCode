package com.itheima.scanner;
//1.导包操作(并不需要自己写）
import java.security.spec.RSAOtherPrimeInfo;
import java.sql.SQLOutput;
import java.util.Scanner;
public class ScannerDemo {
    public static void main(String[] args) {
        //键盘录用技术
        //2.得到一个键盘扫描对象
        Scanner sc=new Scanner(System.in);

        //3.调佣sc对象的功能等待用户输入的数据
        System.out.println("请输入你的年龄：>");
        int age=sc.nextInt();
        System.out.println("你的年龄："+age);

        System.out.println("请输入你的名字：>");
        String name=sc.next();
        System.out.println("欢迎："+name);
    }

}
