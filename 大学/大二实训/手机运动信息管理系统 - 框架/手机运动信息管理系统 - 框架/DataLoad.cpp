/*
文件名：DataLoad.cpp 
功  能：数据加载（读取文件，保存到文件） 
*/
#include"DataLoad.h"
void  ReadFile(SqList &L)        //读取文件
{
	ifstream  in("User.txt",ios::in);
	if(!in)
	{
		cout<<"文件打开失败！"<<endl;
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
	cout<<"共读取了"<<num<<"个数据。"<<endl;
	cout<<"数据读取成功！"<<endl;	
} 
void  WriteFile(SqList &L)        //保存文件
{
	if(L.length<=0)
	{
		cout<<"用户信息为空，保存失败！"<<endl;
		return ;		
	}	
	ofstream out("User.txt",ios::out);
	if(!out)
	{
		cout<<"文件打开失败！"<<endl;
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
	cout<<"数据保存成功！"<<endl;
} 
