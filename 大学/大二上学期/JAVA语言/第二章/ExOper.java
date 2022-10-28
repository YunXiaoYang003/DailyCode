
public class ExOper {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		int i=3;
		//i+=19; //i+=19;->i=i+19 还是等价于i=(int)(i+19)
		i+=19.5; //使用数据类型的强制转换
		i=(int)(i+19.5);
		
		System.out.println(i);

	}

}
