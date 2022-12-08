/*
文件名：SportsMng.cpp 
功  能：运动信息管理功能的实现 
*/
#include"SportsMng.h"
void  AddSportsInfo(SqList &L)      //添加用户运动信息
{
	string id;
	int step;

	int i,j;
	
	PrintUser_week(L);	
	cout<<"请输入要添加的用户号：";
	cin>>id;
	
	i=SearchUser_Byid(L,id);
	if(i==-1)
		cout<<"该用户不存在！"<<endl;
	else
	{
		cout<<"请输入本日所走的步数：";
		cin>>step;
		
		if(step<=0)
			cout<<"输入不合法！"<<endl;
		else
		{
			for(j=1;j<7;j++)
			{
				L.elem[i].stepnum[j-1]=L.elem[i].stepnum[j];
			}
			L.elem[i].stepnum[6]=step;
			
			cout<<"本日运动数据添加成功！"<<endl; 
			PrintUser_week(L);
		} 

	}	
} 
void  EditSportsInfo(SqList &L)      //修改用户运动信息
{
	string id;
	int step;
	
	int i,j;
	
	PrintUser_week(L);
	
	cout<<"请输入要修改的用户号：";
	cin>>id;
	
	i=SearchUser_Byid(L,id);
	if(i==-1)
		cout<<"该用户不存在！"<<endl;
	else
	{
		cout<<"请输入本日新的步数：";
		cin>>step;
		
		if(step<=0)
			cout<<"输入不合法！"<<endl;
		else
		{
			L.elem[i].stepnum[6]=step;			
			cout<<"本日运动数据修改成功！"<<endl;
			PrintUser_week(L); 
		} 
	}	
} 
