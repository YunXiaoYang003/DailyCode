package com.itheima.operator;

public class OpertorDemo6 {
    public static void main(String[] args) {
        double size = 9.8;
        double storage = 16;
        System.out.println(size > 9.5 & storage >= 18);
        System.out.println(size > 9.5 | storage >= 18);
        System.out.println(size > 9.5 ^ storage >= 18);
        System.out.println(!(size > 9.5));
        int a = 10;
        int b = 20;
        System.out.println((a >= 10) || ++b > 10);
        System.out.println((a >= 10) && ++b > 10);

        System.out.println(b);
    }
}
