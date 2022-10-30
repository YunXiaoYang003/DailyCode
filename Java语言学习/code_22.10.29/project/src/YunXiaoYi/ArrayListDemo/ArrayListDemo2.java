package YunXiaoYi.ArrayListDemo;

/**
 目标: 能够使用泛型约束ArrayList集合操作的数据类型
 */

import java.util.ArrayList;

public class ArrayListDemo2
{
    public static void main(String[] args)
    {
        ArrayList<String> list=new ArrayList<String>();
        list.add("YunXiaoYi");
        list.add("used to");
        list.add("love 史雅馨");
        System.out.println(list);

        ArrayList<Integer> list2=new ArrayList<Integer>();
        list2.add(123);
        list2.add(456);
        list2.add(789);
        System.out.println(list2);
    }
}
