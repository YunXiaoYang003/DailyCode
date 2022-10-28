public class data12
{
    public static void main(String[] args)
    {
        int a=10;
        int b=21;
        int c=10;
        System.out.println("认为既a>b又a<b,对吗？"+((a>=b)||(a==b)));
        System.out.println("认为既a>b又a=c,对吗？"+((a<b)||(a==c)));
    }
}
