package YunXiaoYi.ArrayListDemo;

/**
 目标: 创建ArrayList对象，代表集合容器，往里面添加元素。
 */

import java.util.ArrayList;

public class ArrayListDemo1 {
    public static void main(String[] args)
    {
        // 1、创建ArrayList集合的对象
        ArrayList list=new ArrayList();

        // 2、添加数据
        list.add("云小逸");
        list.add("used to be love");
        list.add("史雅馨");
        list.add(0.55);
        list.add(true);
        System.out.println(list);

        // 3、给指定索引位置插入元素
        list.add(0,1);
        System.out.println(list);
    }
}
