package com.itheima.type;

public class TypeDemo2 {
    public static void main(String[] args) {
        //表达式的自动类型转换
        byte a=10;
        int b=20;
        double c=1.0;
        double rs=a+b+c;
        System.out.println(rs);

        byte i=10;
        byte j=20;
//        byte k=i+j;不兼容的类型: 从int转换到byte可能会有损失,byte 、short、char 自动转换为 int类型
        int k=i+j;
        System.out.println(k);
    }
}
