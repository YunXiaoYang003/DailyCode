
public class ExOper {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		int i=3;
		//i+=19; //i+=19;->i=i+19 ���ǵȼ���i=(int)(i+19)
		i+=19.5; //ʹ���������͵�ǿ��ת��
		i=(int)(i+19.5);
		
		System.out.println(i);

	}

}
