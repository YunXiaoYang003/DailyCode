package YunXiaoYi.StringDemo;

public class StringDemo4 {
    public static void main(String[] args)
    {
        // 1、public int length(): 获取字符串的长度
        String name="YunXiaoYi";
        System.out.println(name.length());

        // 2、public char charAt(int index): 获取某个索引位置处的字符
        char ch=name.charAt(0);
        System.out.println(ch);


        System.out.println("------------遍历字符串中的每个字符--------------");
        for(int i=0;i<name.length();i++)
        {
            char ch1=name.charAt(i);
            System.out.println(ch1);
        }

        // 3、public char[] toCharArray()：: 把字符串转换成字符数组
        char[] chars=name.toCharArray();
        System.out.println("------------遍历字符串中的每个字符--------------");
        for(int i=0;i<chars.length;i++)
        {
            System.out.println(chars[i]);
        }

        // 4、public String substring(int beginIndex, int endIndex) ：截取内容，(包前不包后的)
        String s1="C++ and Java are both a good languages";
        String ss1=s1.substring(0,9);
        System.out.println(ss1);
        String ss2=s1.substring(4,15);
        System.out.println(ss2);


        // 5、public String substring(int beginIndex):从当前索引一直截取到末尾
        System.out.println(s1.substring(0));
        System.out.println(s1.substring(10));


        // 6、public String replace(CharSequence target, CharSequence replacement)
        String s2="云小逸想成为比较成功的00后！";
        String s3=s2.replace("云小逸","云小扬");
        System.out.println(s3);

        // 7、public boolean contains(CharSequence s)
        System.out.println(s3.contains("云小扬"));
        System.out.println(s3.contains("云小扬想成为最成功的"));
        System.out.println(s3.contains("云小扬想成为比较成功的"));

        // 8、public boolean startsWith(String prefix)
        System.out.println(s3.startsWith("云小扬"));
        System.out.println(s3.startsWith("云小扬想成为最成功的"));
        System.out.println(s3.startsWith("云小扬想成为比较成功的"));


        // 9、public String[] split(String s): 按照某个内容把字符串分割成字符串数组返回。
        String s4="云小扬，想成为，比较成功的";
        String[] sss=s4.split("，");
        for(int i=0;i<sss.length;i++)
        {
            System.out.println(sss[i]);
        }
    }
}
