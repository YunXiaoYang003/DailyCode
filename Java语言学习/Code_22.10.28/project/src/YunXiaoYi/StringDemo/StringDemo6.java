package YunXiaoYi.StringDemo;

/**
 * 练习题：模拟用户登录
 */

import java.util.Scanner;

public class StringDemo6 {
    public static void main(String[] args)
    {
        // 1、定义正确的登录名称和密码
        String okname="YunXiaoYang";
        String okpassword="123456789";

        // 2、定义一个循环，循环3次，让用户登录
        Scanner r=new Scanner(System.in);
        for(int i=0;i<3;i++)
        {
            System.out.println("请输入用户名和密码：");
            String name=r.next();
            String password=r.next();
            if(name.equals(okname))
            {
                if(password.equals(okpassword))
                {
                    System.out.println("Congratulations,you get it！");
                    break;
                }
                else
                {
                    System.out.println("输入密码错误，请重新错误！");
                }

            }
            else
            {
                System.out.println("输入用户名错误！");
            }

        }

        // 3、判断登录是否成功！


    }
}

