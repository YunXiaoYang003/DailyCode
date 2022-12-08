/*
�ļ�����DataLoad.cpp 
��  �ܣ����ݼ��أ���ȡ�ļ������浽�ļ��� 
*/
#include"DataLoad.h"
void  ReadFile(SqList &L)        //��ȡ�ļ�
{
	ifstream  in("User.txt",ios::in);
	if(!in)
	{
		cout<<"�ļ���ʧ�ܣ�"<<endl;
		return;
	}
	
	ElemType e;
	int num=0;
	while(in>>e.id>>e.name>>e.sex>>e.age
		  >>e.stepnum[0]>>e.stepnum[1]>>e.stepnum[2]
		  >>e.stepnum[3]>>e.stepnum[4]>>e.stepnum[5]
		  >>e.stepnum[6])	
	{
		if(SearchUser_Byid(L,e.id)==-1)
		{
			num++;
			ListInsert(L,e);			
		}

	}
	in.close();
	cout<<"����ȡ��"<<num<<"�����ݡ�"<<endl;
	cout<<"���ݶ�ȡ�ɹ���"<<endl;	
} 
void  WriteFile(SqList &L)        //�����ļ�
{
	if(L.length<=0)
	{
		cout<<"�û���ϢΪ�գ�����ʧ�ܣ�"<<endl;
		return ;		
	}	
	ofstream out("User.txt",ios::out);
	if(!out)
	{
		cout<<"�ļ���ʧ�ܣ�"<<endl;
		return;
	}
	
	int i,j;
	for(i=0;i<L.length;i++)
	{
		out<<L.elem[i].id<<"\t"
		   <<L.elem[i].name<<"\t"
		   <<L.elem[i].sex<<"\t"
		   <<L.elem[i].age<<"\t";
		for(j=0;j<7;j++)
			out<<L.elem[i].stepnum[j]<<"\t";
		out<<endl;
	}
	
	out.close();
	cout<<"���ݱ���ɹ���"<<endl;
} 
