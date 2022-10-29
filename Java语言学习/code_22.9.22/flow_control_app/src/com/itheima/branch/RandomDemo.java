package com.itheima.branch;

import java.util.Random;

public class RandomDemo {
    public static void main(String[] args) {
        Random r = new Random();

        int num = 0;
        for (int i=0;i<20;i++) {
            num = r.nextInt(10);
            System.out.println(num);

        }
        System.out.println("------------------------------");
        int data=r.nextInt(10)+1;
        System.out.println(data);
        //3-17
        int data1=r.nextInt(15)+1;
        System.out.println(data1);
    }
}
