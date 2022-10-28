package YunXiaoYi.StringDemo;

import java.util.Scanner;

public class StringDemo3 {
    public static void main(String[] args)
    {
        // 1、正确登录名和密码
        String okname="YunXiaoYi";
        String okpassword="123456";


        // 2、请您输入登录名称和密码
        Scanner r=new Scanner(System.in);
        String name=r.next();
        String password=r.next();


        // 3、判断用户输入的登录名称和密码与正确的内容是否相等。
        if(name.equals(okname)&&password.equals(okpassword))
        {
            System.out.println("You are Good!");
        }
        else
            System.out.println("ERROR!");


        // 4、忽略大小写比较内容的Api: 一般用于比较验证码这样的业务逻辑
        String s1="abc";
        String s2="ABC";
        System.out.println(s1.equals(s2));
        System.out.println(s1.equalsIgnoreCase(s2));
    }
}
