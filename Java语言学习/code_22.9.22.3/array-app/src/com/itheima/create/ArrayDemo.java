package com.itheima.create;

public class ArrayDemo {
    public static void main(String[] args) {
        //目标：学会使用静态初始化的定义数组
        //数据类型【】 数组名称=new 数据类型【】{元素1，元素2,...}
        double[] scroes=new double[]{99.6,55,.0,75.5};

        int[] ages=new int[]{12,14,15};

        String[] names=new String[]{"牛二","全蛋儿"};
        System.out.println(scroes[0]);
        System.out.println(scroes.length);
    }
}
