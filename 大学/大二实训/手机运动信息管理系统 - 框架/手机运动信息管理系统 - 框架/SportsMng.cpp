/*
�ļ�����SportsMng.cpp 
��  �ܣ��˶���Ϣ�����ܵ�ʵ�� 
*/
#include"SportsMng.h"
void  AddSportsInfo(SqList &L)      //����û��˶���Ϣ
{
	string id;
	int step;

	int i,j;
	
	PrintUser_week(L);	
	cout<<"������Ҫ��ӵ��û��ţ�";
	cin>>id;
	
	i=SearchUser_Byid(L,id);
	if(i==-1)
		cout<<"���û������ڣ�"<<endl;
	else
	{
		cout<<"�����뱾�����ߵĲ�����";
		cin>>step;
		
		if(step<=0)
			cout<<"���벻�Ϸ���"<<endl;
		else
		{
			for(j=1;j<7;j++)
			{
				L.elem[i].stepnum[j-1]=L.elem[i].stepnum[j];
			}
			L.elem[i].stepnum[6]=step;
			
			cout<<"�����˶�������ӳɹ���"<<endl; 
			PrintUser_week(L);
		} 

	}	
} 
void  EditSportsInfo(SqList &L)      //�޸��û��˶���Ϣ
{
	string id;
	int step;
	
	int i,j;
	
	PrintUser_week(L);
	
	cout<<"������Ҫ�޸ĵ��û��ţ�";
	cin>>id;
	
	i=SearchUser_Byid(L,id);
	if(i==-1)
		cout<<"���û������ڣ�"<<endl;
	else
	{
		cout<<"�����뱾���µĲ�����";
		cin>>step;
		
		if(step<=0)
			cout<<"���벻�Ϸ���"<<endl;
		else
		{
			L.elem[i].stepnum[6]=step;			
			cout<<"�����˶������޸ĳɹ���"<<endl;
			PrintUser_week(L); 
		} 
	}	
} 
