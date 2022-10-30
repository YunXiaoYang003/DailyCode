package YunXiaoYi.ArrayListDemo;

/**
 目标：掌握ArrayList集合的常用API
 */

import java.util.ArrayList;

public class ArrayListDemo3
{
    public static void main(String[] args)
    {
        ArrayList<String> list =new ArrayList<String>();
        list.add("YunXiaoYi");
        list.add("KongQing");
        list.add("YunXiaoYang");
        System.out.println(list);

        // 1、public E get(int index)：获取某个索引位置处的元素值
        String e=list.get(2);
        System.out.println(e);

        // 2、public int size()：获取集合的大小（元素个数）
        int size=list.size();
        System.out.println(size);

        // 3、完成集合的遍历
        for(int i=0;i<list.size();i++)
        {
            System.out.println(list.get(i));
        }

        // 4、public E remove(int index)：删除某个索引位置处的元素值,并返回被删除的元素值
        String e1=list.remove(1);
        System.out.println(e1);
        System.out.println(list);

        // 5、public boolean remove(Object o):直接删除元素值，删除成功返回true，删除失败返回false
        System.out.println(list.remove("YunXiaoYi"));
        System.out.println(list);


        // 只会删除第一次出现的这个元素值，后面的不删除



        // 6、public E set(int index,E element)：修改某个索引位置处的元素值。
        String e2=list.set(0,"史雅馨");
        System.out.println(e2);
        System.out.println(list);
    }
}
