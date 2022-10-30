package YunXiaoYi.ArrayListDemo;

/**
 案例：集合存储自定义元素并遍历。
 需求：定义电影类（名称，分值，演员），创建3个电影对象，代表三部影片，存入集合中并遍历。
 《肖生克的救赎》, 9.7 , 罗宾斯
 《霸王别姬》, 9.6 , 张国荣、张丰毅
 《阿甘正传》, 9.5 , 汤姆.汉克斯
 */

import java.util.ArrayList;

public class ArrayListDemo5 {
    public static void main(String[] args)
    {
        // 1、定义一个电影类：Movie
        // 2、定义一个ArrayList集合存储这些影片对象。
        // 3、创建影片对象封装电影数据，把对象加入到集合中去。
       //Movie m1 = new Movie("《肖生克的救赎》", 9.7 , "罗宾斯");
       //movies.add(m1);
        Movie m1=new Movie("《肖生克的救赎》",9.7,"罗宾斯" );
        Movie m2=new Movie("《霸王别姬》",9.6,"张国荣、张丰毅" );
        Movie m3=new Movie("《阿甘正传》",9.5,"汤姆.汉克斯" );
        ArrayList<Movie> list=new ArrayList<>();
        list.add(m1);
        list.add(m2);
        list.add(m3);

        // 4、遍历集合中的影片对象并展示出来
        for(int i=0;i<list.size();i++)
        {
            Movie movie=list.get(i);
            System.out.println(movie.getName());
            System.out.println(movie.getScore());
            System.out.println(movie.getActor());
        }

    }
}
