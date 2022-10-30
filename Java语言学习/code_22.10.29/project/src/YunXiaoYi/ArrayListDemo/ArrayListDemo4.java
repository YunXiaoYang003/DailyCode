package YunXiaoYi.ArrayListDemo;

/**
 案例：从集合中遍历元素且删除。
 */

import java.util.ArrayList;

public class ArrayListDemo4 {
    public static void main(String[] args)
    {
    // 1、创建集合对象：存入学生成绩(98,77,66,89,79,50,100)
        ArrayList<Integer> list=new ArrayList<>();
        list.add(98);
        list.add(77);
        list.add(66);
        list.add(89);
        list.add(79);
        list.add(50);
        list.add(100);
        // [98, 77, 66, 89, 79, 50, 100
        // 1、遍历集合中的每个元素
//方法一：
//        for(int i=0;i<list.size();i++)
//        {
//            int score=list.get(i);
//            //2、判断这个分数是否低于80分，如果低于则从集合中删除它
//            if(score<80)
//            {
//                list.remove(i);
//                i--;
//            }
//
//        }

        //方法二：
        for(int i=list.size()-1;i>=0;i--)
        {
            int score1=list.get(i);
            if(score1<80)
            {
                list.remove(i);
            }
        }

        System.out.println(list);
    }
}
