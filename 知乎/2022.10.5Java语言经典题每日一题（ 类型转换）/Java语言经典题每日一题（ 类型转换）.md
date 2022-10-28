**在本篇文章里，我将分享一道很经典的Java语言经典题目——**类型转换**，并且分享解题思路，希望可以帮助到你** 

类型转换_牛客题霸_牛客网www.nowcoder.com/practice/0540ee3987b64bd7bb93adb5bd0e35d4?tpId=220&tqId=2220136&ru=%2Fpractice%2F50b50ae39d65415a9fd70601d711e5af&qru=%2Fta%2Fprimary-grammar-java%2Fquestion-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D220

## 描述   设计一个方法，将一个小于2147483647的double类型变量以截断取整方式转化为int类型   输入描述： 随机double类型变量 输出描述： 转化后的int类型变量

### 示例1 输入： 12.34 

### 输出：12

### 示例2 输入： 1.88

### 输出：1

## 解题思路：

利用装箱与拆箱的概念来解题

### **以下代码均经过牛客测试，均正确，请放心测试**

### **代码：**

```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double d = scanner.nextDouble();
        System.out.println(Main.typeConversion(d));
    }
    public static int typeConversion(double d) {

        //write your code here......
        Double e = new Double(d);
        int i = e.intValue();
        return i;
    }
}
```

### **结果展示：**

![img](https://picx.zhimg.com/80/v2-1eb0c28e7b6470b941fd21f21bcd5b02_720w.png)



添加图片注释，不超过 140 字（可选）

## **刷题推荐：**

类型转换_牛客题霸_牛客网www.nowcoder.com/practice/0540ee3987b64bd7bb93adb5bd0e35d4?tpId=220&tqId=2220136&ru=%2Fpractice%2F50b50ae39d65415a9fd70601d711e5af&qru=%2Fta%2Fprimary-grammar-java%2Fquestion-ranking&sourceUrl=%2Fexam%2Foj%3Fpage%3D1%26tab%3D%25E8%25AF%25AD%25E6%25B3%2595%25E7%25AF%2587%26topicId%3D220

**就比如这一题，它上面有很多题解，供你参考，C语言，JAVA,C++，GO语言等多种语言可以选择，而且不少题解有视频讲解，以及解法分析等。** **最后** **十分感谢你可以耐着性子把它读完和我可以坚持写到这里，送几句话，对你，也对我：**

> **1、要么努力往上爬，要么烂在社会最底层。 2你现在的努力，真的配得上你的野心吗 ？ 3、承认吧你表面的不屑，只是因为你骨子里的不敢。 4、“你说我现在开始好好学，晚了吗？” “我说晚了，你就不学吗？？？” 他们都是假装颓废，而你是真的颓废。 5、有种错觉叫做“我在头脑中激情澎湃了一会儿就权当我努力过了”，还有种常态叫做“我临睡前想做件大事改变世界激动得睡不着第二天早上连早起都做不到”。**

**最后如果觉得我写的还不错，请不要忘记点赞✌，收藏✌，加关注✌哦(｡･ω･｡)** ***愿我们一起加油，奔向更美好的未来，愿我们从懵懵懂懂的一枚==菜鸟==逐渐成为==大佬==。加油，为自己点赞！\***