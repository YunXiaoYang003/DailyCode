**在本篇文章里，我将分享一道很经典的Java语言题———**交换变量值**，并且分享解题思路，希望可以帮助到你** 

### 描述 在不使用第三个变量的情况下交换两个int类型变量的值 输入描述： a变量和b变量的值 输出描述： 交换后a变量和b变量的值，中间用空格隔开

### 示例1 输入：1 2 复制 输出：2 1

## **以下代码均经过牛客测试，均正确，请放心测试**

## **解题思路：**

**由于题目要求不可以使用第三个变量，因此使用位运算^，这样就可以很好的解决这道题了。**

**代码：**

```
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        a=a^b;
        b=a^b;
        a=a^b;
        System.out.println(a+" "+b);
    }
}
```

### **结果展示：**

![img](https://pic1.zhimg.com/80/v2-2a942c7044ddb24a4049ac655383763a_720w.png)



编辑切换为居中

添加图片注释，不超过 140 字（可选）

### **刷题推荐：**

牛客网 - 找工作神器|笔试题库|面试经验|实习招聘内推，求职就业一站解决_牛客网www.nowcoder.com/exam/oj?pc_yxzh_qudao

**就比如这一题，它上面有很多题解，供你参考，C语言，JAVA,C++，GO语言等多种语言可以选择，而且不少题解有视频讲解，以及解法分析等。**

### **最后**

**十分感谢你可以耐着性子把它读完和我可以坚持写到这里，送几句话，对你，也对我：**

>  **1、要么努力往上爬，要么烂在社会最底层。 2你现在的努力，真的配得上你的野心吗 ？ 3、承认吧你表面的不屑，只是因为你骨子里的不敢。 4、“你说我现在开始好好学，晚了吗？” “我说晚了，你就不学吗？？？” 他们都是假装颓废，而你是真的颓废。 5、有种错觉叫做“我在头脑中激情澎湃了一会儿就权当我努力过了”，还有种常态叫做“我临睡前想做件大事改变世界激动得睡不着第二天早上连早起都做不到”。**

**最后如果觉得我写的还不错，请不要忘记点赞✌，收藏✌，加关注✌哦(｡･ω･｡)**

***愿我们一起加油，奔向更美好的未来，愿我们从懵懵懂懂的一枚==菜鸟==逐渐成为==大佬==。加油，为自己点赞！\***