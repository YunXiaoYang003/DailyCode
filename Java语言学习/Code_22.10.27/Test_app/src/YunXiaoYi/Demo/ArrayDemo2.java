package YunXiaoYi.Demo;

//导包
import java.util.Random;

public class ArrayDemo2 {
    public static void main(String[] args) {
        //随机排名
        int arr[] = {1, 2, 3, 4, 5};
        Random r = new Random();
        int num = 0;
//        int num=r.nextInt(6)-1;
//        System.out.println(num);
        for (int i = 0; i < arr.length; i++) {
            num = r.nextInt(6) - 1;
            System.out.println(num);
//            int num=r.nextInt(6)-1;
////            int num=r.nextInt(arr.length);
//            int temp=arr[i];
//            arr[i]=arr[num];
//            arr[num]=temp;
//        }
//        for(int i=0;i<arr.length;i++)
//        {
//            System.out.println(arr[i]);
//        }
        }
    }
}
