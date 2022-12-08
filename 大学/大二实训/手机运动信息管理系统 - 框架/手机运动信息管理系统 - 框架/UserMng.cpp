/*
文件名：UserMng.cpp 
功  能：用户信息管理的实现 
*/
#include"UserMng.h"


Status  AddOneUser(SqList &L)      //添加单个用户 
{
	ElemType  e;
	int  i; 
		
	//需要加入判断用户名、姓名、性别等是否合法，不合法重复输入等 
	cout<<"用户号（手机号，11位）：";		cin>>e.id;
	//各种合法性判断，调用IsValid_UserId是否唯一等 
	 
	cout<<"姓名：";		cin>>e.name;
	cout<<"性别(f/m)：";		cin>>e.sex; 
	cout<<"年龄：";		cin>>e.age;	

	for(i=0;i<7;i++)
		e.stepnum[i]=0;        //将7天的运动数据初始化为0 
	
	return ListInsert(L,e);           //调用数据层插入函数 
}

bool IsValid_UserId(string id)           //判断用户号是否合法
{
	//判断是否合法
	 
	return true;
} 

void  AddUser(SqList &L)                //添加用户
{
	int num,result,flag;
	cout<<"请输入要添加用户的个数：";
	cin>>num;
	if(num<=0||num>MAXSIZE)
		cout<<"输入不合法！"<<endl;
	else
	{
		for(int i=1;i<=num;i++)
		{
			cout<<"请输入第"<<i<<"个用户信息："<<endl;
			result=AddOneUser(L);
			if(result==ERROR)
			{
				cout<<"该用户添加失败！"<<endl;
			}
		}	
		cout<<"用户添加成功！"<<endl;				
	} 
}


void  PrintUser(SqList &L)                         //显示所有用户
{
	if(L.length<=0)
		cout<<"当前用户为空！"<<endl;
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
	cout<<setw(15)<<"用户号"<<setw(10)<<"姓名"
	<<setw(8)<<"性别"<<setw(8)<<"年龄"
	<<setw(12)<<"本日步数" <<setw(12)<<"平均步数"
	<<setw(15)<<"连续运动天数"
	<<endl;
}
void  ShowUserByi(SqList &L,int i)
{
		cout<<setw(15)<<L.elem[i].id
		<<setw(10)<<L.elem[i].name
		<<setw(8)<<((L.elem[i].sex=='f')?"女":"男")
		<<setw(8)<<L.elem[i].age
		<<setw(12)<<L.elem[i].stepnum[6]
		//<<setw(12)<<SportsInfo_Average(L,i)
		//<<setw(15)<<SportsInfo_continuousDays(L,i)			
		<<endl;
} 

