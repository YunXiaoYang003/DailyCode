package YunXiaoYi.Demo;

//1.导包
import java.util.Random;

public class RandDemo {
    public static void main(String[] args)
    {
        //2.得到随机数对象
        Random r=new Random();
        //3.调用随机数的功能获得随机数0-9
        int num=r.nextInt(10);
        System.out.println(num);
        int num2=r.nextInt(10);
        System.out.println(num2);
    }
}
