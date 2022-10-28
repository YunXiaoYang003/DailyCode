package YunXiaoYi.Demo;

public class ArrayDemo1 {
    public static void main(String[] args)
    {
        int[] arr1=new int[]{1,2,3,4,5};
        int sum=0;
        for(int i=0;i<arr1.length;i++)
        {
            System.out.println(arr1[i]);
        }
        for(int i=0;i<arr1.length;i++)
        {
            sum+=arr1[i];
        }
        System.out.println(sum);
    }
}
