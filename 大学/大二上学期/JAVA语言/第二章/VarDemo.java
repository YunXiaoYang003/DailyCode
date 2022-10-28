
public class VarDemo {

	static int num2=10;  //成员变量
	public static void main(String[] args) {
		// TODO Auto-generated method stub
       /*  int result=0;  //声明一个局部变量
       System.out.println("result= "+result);*/
		System.out.print("***********add()方法被调用********" +
				"\n");
		System.out.print(add(10)+num2);
		
		//定义长整型数据类型时，需在后面跟L或者是l
		long l=33454555l;
		float price=23.45F;  //23.45f
		double order_price=56.55;
		byte b1=5; //8位
		float f1=b1;//32位     低精度的数据类型赋值给高精度的数据类型，自动数据类型转换
		int i1=0;
		i1=(int)f1;  //强制数据类型转换：把高精度的数据类型转换成低精度的数据类型
		
		i1++;  //i1先运算，后进行加1或减一操作(i1--)
		++i1;  //i1先进行加1或减1操作，然后再参与运算
	}
	
	public static int add(int num){
		int result=0;
		for(int i=0;i<num;i++){
			result=result+num;
		}
		return result;
	}
	
	//0123表示十进制数的83(八进制数到十进制数之间的转换)  -> 1*64+2*8+3*1=83
	//第一：当把低数据类型赋值给高数据类型时，会进行自动转换，转换成高数据类型
	//第二：如果把高数据类型赋值给低数据类型，需要进行强制数据类型转换。
	//第三：当低数据类型和高数据类型进行运算时，低数据类型会自动转成高数据类型
	public void transData(){
		byte b=100;
		short s=b;
		s=(short)(b*2);
		b=(byte)s;  
		
	}
    
	public void method(){
		int i=1,j=2;
		boolean flag1=(i>1 || j>5 )&&((j+2)>6);
	}
}
