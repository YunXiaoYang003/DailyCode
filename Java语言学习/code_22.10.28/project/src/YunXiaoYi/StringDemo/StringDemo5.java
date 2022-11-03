package YunXiaoYi.StringDemo;

//导包
import java.util.Random;

public class StringDemo5 {
    public static void main(String[] args)
    {
        // 1、定义可能出现的字符信息
       String s="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRRSTUVWXYZ0123456789";

        // 2、循环5次，每次生成一个随机的索引，提取对应的字符连接起来即可
        String ss="";
        Random r=new Random();
        for(int i=0;i<5;i++)
        {
            int index=r.nextInt(s.length());
            char ch=s.charAt(index);
            ss+=ch;
        }

        // 3、输出字符串变量即可
        System.out.println(ss);
    }
}


