package com.itheima.create;

public class ArrayDemo2 {
    public static void main(String[] args) {
        //目标：学会动态初始化数组的定义与使用
        double[] scores=new double[3];
        scores[0]=1;
        System.out.println(scores[0]);
        System.out.println(scores[1]);
        System.out.println(scores[2]);

        String[] names=new String[3];
        names[0]="迪丽热巴";
        names[2]="马尔扎特";
        for(int i=0;i<3;i++)
        {
            System.out.println(names[i]);
        }
    }
}
