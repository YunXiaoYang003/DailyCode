package com.itheima.operator;

public class OperatorDemo4 {
    public static void main(String[] args) {
        int a = 10;
        int rs1 = a++;
        int b = 10;
        int rs2 = ++b;
        System.out.println(rs1);
        System.out.println(rs2);
        int c = 10;
        int d = 5;
        int rs3 = c++ + ++c - --d - ++d + 1 + c--;
        System.out.println(rs3);
        System.out.println(c);
        System.out.println(d);

    }
}
