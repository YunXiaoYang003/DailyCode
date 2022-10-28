package YunXiaoYi.StringDemo;

//Sting创建对象的两种方式

public class StringDemo2 {
    public static void main(String[] args) {
        // 方式一：直接使用双引号得到字符串对象
         String s1="I used to like you!";
        System.out.println(s1);
        System.out.println("s1");

        // 方式二：
        // 1、public String(): 创建一个空白字符串对象，不含有任何内容 （几乎不用）
        String s2=new String();
        System.out.println(s2);

        // 2、public String(String): 根据传入的字符串内容，来创建字符串对象（几乎不用）
        String s3=new String("I used to like you!");
        System.out.println(s3);

        // 3、public String(char[] c): 根据字符数组的内容，来创建字符串对象
        char[] chars={'a','b','c'};
        String s4=new String(chars);
        System.out.println(s4);

        // 4、public String(byte[] b):  根据字节数组的内容，来创建字符串对象
        byte[] bytes={97,98,99,65,66,67};
        String s5=new String(bytes);
        System.out.println(s5);

        //字符串1==字符串2
        String ss1="abc";
        String ss2="abc";
        System.out.println(ss1==ss2);

        char[] chars1={'a','b','c'};
        String ss3=new String(chars1);
        String ss4=new String(chars1);
        System.out.println(ss3==ss4);


    }
}












