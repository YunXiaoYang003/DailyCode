package com.itheima.create;

public class ArrayMaxDemo {
    public static void main(String[] args) {
        //目标：求数组最大值
        int face[]={15,9000,10000,9500,-5};
        int max=face[0];
        for(int i=1;i<face.length;i++)
        {
            if(max<face[i])
                max=face[i];
        }
        System.out.println(max);
    }
}
