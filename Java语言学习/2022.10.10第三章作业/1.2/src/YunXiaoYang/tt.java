package YunXiaoYang;

public class tt{
    public static void main (String args[]){
        tt t = new tt();
        t.test(3);//可改变成3运行一下看一下结果
    }
    void test(int i){
        switch (i){
            default:
                System.out.println("default");
            case 1:
                System.out.println("111");
                break;
            case 2:
                System.out.println("222");
                break;
        }
    }
}
