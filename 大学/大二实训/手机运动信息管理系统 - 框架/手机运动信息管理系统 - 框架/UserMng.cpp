/*
�ļ�����UserMng.cpp 
��  �ܣ��û���Ϣ�����ʵ�� 
*/
#include"UserMng.h"


Status  AddOneUser(SqList &L)      //��ӵ����û� 
{
	ElemType  e;
	int  i; 
		
	//��Ҫ�����ж��û������������Ա���Ƿ�Ϸ������Ϸ��ظ������ 
	cout<<"�û��ţ��ֻ��ţ�11λ����";		cin>>e.id;
	//���ֺϷ����жϣ�����IsValid_UserId�Ƿ�Ψһ�� 
	 
	cout<<"������";		cin>>e.name;
	cout<<"�Ա�(f/m)��";		cin>>e.sex; 
	cout<<"���䣺";		cin>>e.age;	

	for(i=0;i<7;i++)
		e.stepnum[i]=0;        //��7����˶����ݳ�ʼ��Ϊ0 
	
	return ListInsert(L,e);           //�������ݲ���뺯�� 
}

bool IsValid_UserId(string id)           //�ж��û����Ƿ�Ϸ�
{
	//�ж��Ƿ�Ϸ�
	 
	return true;
} 

void  AddUser(SqList &L)                //����û�
{
	int num,result,flag;
	cout<<"������Ҫ����û��ĸ�����";
	cin>>num;
	if(num<=0||num>MAXSIZE)
		cout<<"���벻�Ϸ���"<<endl;
	else
	{
		for(int i=1;i<=num;i++)
		{
			cout<<"�������"<<i<<"���û���Ϣ��"<<endl;
			result=AddOneUser(L);
			if(result==ERROR)
			{
				cout<<"���û����ʧ�ܣ�"<<endl;
			}
		}	
		cout<<"�û���ӳɹ���"<<endl;				
	} 
}


void  PrintUser(SqList &L)                         //��ʾ�����û�
{
	if(L.length<=0)
		cout<<"��ǰ�û�Ϊ�գ�"<<endl;
	else
	{
		ShowTitle();		
		for(int i=0;i<L.length ;i++)
		{		
			ShowUserByi(L,i);
		}		
	}	
}

void ShowTitle() 
{
	cout<<setw(15)<<"�û���"<<setw(10)<<"����"
	<<setw(8)<<"�Ա�"<<setw(8)<<"����"
	<<setw(12)<<"���ղ���" <<setw(12)<<"ƽ������"
	<<setw(15)<<"�����˶�����"
	<<endl;
}
void  ShowUserByi(SqList &L,int i)
{
		cout<<setw(15)<<L.elem[i].id
		<<setw(10)<<L.elem[i].name
		<<setw(8)<<((L.elem[i].sex=='f')?"Ů":"��")
		<<setw(8)<<L.elem[i].age
		<<setw(12)<<L.elem[i].stepnum[6]
		//<<setw(12)<<SportsInfo_Average(L,i)
		//<<setw(15)<<SportsInfo_continuousDays(L,i)			
		<<endl;
} 

