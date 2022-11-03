package YunXiaoYi.Demo;

//猜数字游戏

//导包
import java.util.Random;
import java.util.Scanner;

public class GuessDigital {
    public static void main(String[] args)
    {
        Random r=new Random();
        int num=r.nextInt(10);
        while(true)
        {
            Scanner m=new Scanner(System.in);
            System.out.println("输入你猜测的数字：");
            int guess_num=m.nextInt();
            if(guess_num==num)
            {
                System.out.println("Congratulations!You get it!");
                break;
            }
            else
            {
                System.out.println("输入错误或猜测错误！");
            }
        }
    }

}
