
public class VarDemo {

	static int num2=10;  //��Ա����
	public static void main(String[] args) {
		// TODO Auto-generated method stub
       /*  int result=0;  //����һ���ֲ�����
       System.out.println("result= "+result);*/
		System.out.print("***********add()����������********" +
				"\n");
		System.out.print(add(10)+num2);
		
		//���峤������������ʱ�����ں����L������l
		long l=33454555l;
		float price=23.45F;  //23.45f
		double order_price=56.55;
		byte b1=5; //8λ
		float f1=b1;//32λ     �;��ȵ��������͸�ֵ���߾��ȵ��������ͣ��Զ���������ת��
		int i1=0;
		i1=(int)f1;  //ǿ����������ת�����Ѹ߾��ȵ���������ת���ɵ;��ȵ���������
		
		i1++;  //i1�����㣬����м�1���һ����(i1--)
		++i1;  //i1�Ƚ��м�1���1������Ȼ���ٲ�������
	}
	
	public static int add(int num){
		int result=0;
		for(int i=0;i<num;i++){
			result=result+num;
		}
		return result;
	}
	
	//0123��ʾʮ��������83(�˽�������ʮ������֮���ת��)  -> 1*64+2*8+3*1=83
	//��һ�����ѵ��������͸�ֵ������������ʱ��������Զ�ת����ת���ɸ���������
	//�ڶ�������Ѹ��������͸�ֵ�����������ͣ���Ҫ����ǿ����������ת����
	//�����������������ͺ͸��������ͽ�������ʱ�����������ͻ��Զ�ת�ɸ���������
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
