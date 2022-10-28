package com.itheima.Demo;

import java.util.Scanner;

//目标：面向对象编程训练，购物车模块模拟
public class ShopCarTest {
    public static void main(String[] args) {
        //1.定义商品类，用于后期创建商品对象
        //2.定义购物车对象，使用一个数组对象表示
        Goods[] shopCar = new Goods[100];
        //3.搭建操作架构
        System.out.println("请你选择如下命令进行操作");
        System.out.println("添加商品到购物车：add");
        System.out.println("查询商品到购物车：query");
        System.out.println("修改商品购买数量：update");
        System.out.println("结算购买的商品金额：query");
        Scanner sc = new Scanner(System.in);
        System.out.println("请你输入命令：");
        String command = sc.next();
        switch (command) {
            case "add":
                //添加商品到你的购物车
                addGoods(shopCar);
                break;
            case "quary":
                //查询购物车商品展示
                quaryGoods(shopCar);
                break;
            case "update":
                //查询购物车商品展示
                updateGoods(shopCar);
                break;
            case "pay":
                //结算金额
                pay(shopCar);
                break;
        }
    }
//完成商品添加到购物车
    public static void addGoods(Goods[] shopCar) {
        //录用用户输入的购买商品的信息
        Scanner sc = new Scanner(System.in);
        System.out.println("请输入你购买商品的编号（不重复）");
        int id=sc.nextInt();
        System.out.println("请输入你购买商品的名称");
        String name=sc.next();
        System.out.println("请输入你购买商品的数量");
        int buyNumber=sc.nextInt();
        System.out.println("请输入你购买商品的价格");
        double price=sc.nextDouble();

        //2.把这个购买商品的信息封装成一个商品对象
        Goods g=new Goods();
        g.id=id;
        g.name=name;
        g.buyNumber=buyNumber;
        g.price=price;

        //3.把这个商品对象添加到购物车数组上去
        //shopCar={NULL,NULL.NULL......};
        for(int i=0;;i<shopCar.length;i++)
        {
            z
        }
    }

    public static void quaryGoods(Goods[] shopCar) {


    }

    public static void updateGoods(Goods[] shopCar) {

    }

    public static void pay(Goods[] shopCar) {

    }
}