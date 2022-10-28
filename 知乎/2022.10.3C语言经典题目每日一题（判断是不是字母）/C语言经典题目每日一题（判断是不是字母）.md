**在本篇文章里，我将分享一道很经典的C语言题———字母大小写转换，并且分享解题思路，希望可以帮助到你** 

判断是不是字母_牛客题霸_牛客网www.nowcoder.com/practice/91a588dd4cd244bfa616f17603ec123c?tpId=107&&tqId=33328&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

**描述**

KiKi想判断输入的字符是不是字母，请帮他编程实现。输入描述：多组输入，每一行输入一个字符。输出描述：针对每组输入，输出单独占一行，判断输入字符是否为字母，输出内容详见输出样例。示例1输入：`A 6`复制输出：`A is an alphabet. 6 is not an alphabet.`

### **以下代码均经过牛客测试，均正确，请放心测试**

### **解题思路：**

**这里的我提供三种解法：**

**代码：**

```
// #include <stdio.h>

//解法一：
// int main() {
//     char ch=0;

//     while(scanf("%c",&ch)==1)
//     {
//         if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
//         printf("%c is an alphabet.\n",ch);
//         else
//         printf("%c is not an alphabet.\n",ch);

//         getchar();//吸收'\n'
//     }
//     return 0;
// }

//解法二：
// #include <stdio.h>

// int main() {
//     char ch=0;

//     //%c前面加上空格，
//     //跳过下一个字符之前的所有空白字符
//     while(scanf(" %c",&ch)==1)
//     {
//         if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
//         printf("%c is an alphabet.\n",ch);
//         else
//         printf("%c is not an alphabet.\n",ch);
//     }
//     return 0;
// }

//解法三：
#include <stdio.h>
#include<ctype.h>

int main() {
    char ch=0;

    //%c前面加上空格，
    //跳过下一个字符之前的所有空白字符
    while(scanf(" %c",&ch)==1)
    {
        if(isalpha(ch))
        printf("%c is an alphabet.\n",ch);
        else
        printf("%c is not an alphabet.\n",ch);
    }
    return 0;
}
```

### **结果展示：**

![img](https://picx.zhimg.com/80/v2-321449457235973c7701e5a8f5b8f7fe_720w.jpeg?source=d16d100b)



编辑切换为居中

添加图片注释，不超过 140 字（可选）

### **刷题推荐：**

牛客网 - 找工作神器|笔试题库|面试经验|实习招聘内推，求职就业一站解决_牛客网www.nowcoder.com/exam/oj?page=1&tab=%E7%AE%97%E6%B3%95%E7%AF%87&topicId=295&fromPut=pc_yxzh_sf

**就比如这一题，它上面有很多题解，供你参考，C语言，JAVA,C++，GO语言等多种语言可以选择，而且不少题解有视频讲解，以及解法分析等。**

### **最后**

**十分感谢你可以耐着性子把它读完和我可以坚持写到这里，送几句话，对你，也对我：**

> **1、要么努力往上爬，要么烂在社会最底层。 2你现在的努力，真的配得上你的野心吗 ？ 3、承认吧你表面的不屑，只是因为你骨子里的不敢。 4、“你说我现在开始好好学，晚了吗？” “我说晚了，你就不学吗？？？” 他们都是假装颓废，而你是真的颓废。 5、有种错觉叫做“我在头脑中激情澎湃了一会儿就权当我努力过了”，还有种常态叫做“我临睡前想做件大事改变世界激动得睡不着第二天早上连早起都做不到”。**

**最后如果觉得我写的还不错，请不要忘记点赞✌，收藏✌，加关注✌哦(｡･ω･｡)**

***愿我们一起加油，奔向更美好的未来，愿我们从懵懵懂懂的一枚==菜鸟==逐渐成为==大佬==。加油，为自己点赞！\***