/*
文件名：RankingList.h 
功  能：运动排行榜 的实现 
*/
#include"RankingList.h"

//UserOrderList UList[MAXSIZE];

void ShowTodayList(SqList &L)       //显示当天运动排行榜 
{
	UserOrderList t,UList[MAXSIZE];
	int n=L.length,i,k,j;
	
	if(n<=0)	
	{
		cout<<"用户信息为空！"<<endl;
		return ;
	} 
	
	for(i=0;i<n;i++)
	{
		UList[i].e=L.elem[i];		
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(UList[j].e.stepnum[6]<UList[j+1].e.stepnum[6])
			{
				t=UList[j];	UList[j]=UList[j+1];UList[j+1]=t;				
			}
		}
	}
	
	cout<<setw(15)<<"用户号"<<setw(10)<<"姓名"
		<<setw(8)<<"性别"<<setw(8)<<"年龄"
		<<setw(15)<<"本日步数"
		<<endl;
		
	for(int i=0;i<n ;i++)
	{		
		cout<<setw(15)<<UList[i].e.id
			<<setw(10)<<UList[i].e.name
			<<setw(8)<<((UList[i].e.sex=='f')?"女":"男")
			<<setw(8)<<UList[i].e.age
			<<setw(15)<<UList[i].e.stepnum[6]			
			<<endl;
	}
} 
 
void  ShowcontinuousDays(SqList &L)    //所有人连续运动天数排行榜 
{
	UserOrderList t,UList[MAXSIZE];
	int n=L.length,i,k,j;
	
	if(n<=0)	
	{
		cout<<"用户信息为空！"<<endl;
		return ;
	} 
	
	for(i=0;i<n;i++)
	{
		UList[i].e=L.elem[i];
		UList[i].step=SportsInfo_continuousDays(L,i);		
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(UList[j].step<UList[j+1].step)
			{
				t=UList[j];	UList[j]=UList[j+1];UList[j+1]=t;				
			}
		}
	}
	
	cout<<setw(15)<<"用户号"<<setw(10)<<"姓名"
		<<setw(8)<<"性别"<<setw(8)<<"年龄"
		<<setw(10)<<"第1天"<<setw(10)<<"第2天"<<setw(10)<<"第3天"
		<<setw(10)<<"第4天"<<setw(10)<<"第5天"<<setw(10)<<"第6天"
		<<setw(10)<<"第7天"		
		<<setw(15)<<"连续运动天数"
		<<endl;
		
	for(int i=0;i<n ;i++)
	{		
		cout<<setw(15)<<UList[i].e.id
			<<setw(10)<<UList[i].e.name
			<<setw(8)<<((UList[i].e.sex=='f')?"女":"男")
			<<setw(8)<<UList[i].e.age;
			
		for(int j=0;j<7;j++)
		{
			cout<<setw(10)<<UList[i].e.stepnum[j]; 			
    	}
		cout<<setw(15)<<UList[i].step			
			<<endl;
	}
}

void  ShowWeeklyList(SqList &L)        //一周排行榜 
{
	UserOrderList t,UList[MAXSIZE];
	
	int n=L.length,i,k,j;
	
	if(n<=0)	
	{
		cout<<"用户信息为空！"<<endl;
		return ;
	} 
	
	for(i=0;i<n;i++)
	{
		UList[i].e=L.elem[i];
		UList[i].step=SportsInfo_Average(L,i);		
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(UList[j].step<UList[j+1].step)
			{
				t=UList[j];	UList[j]=UList[j+1];UList[j+1]=t;				
			}
		}
	}
		
	cout<<setw(15)<<"用户号"<<setw(10)<<"姓名"
		<<setw(10)<<"第1天"<<setw(10)<<"第2天"<<setw(10)<<"第3天"
		<<setw(10)<<"第4天"<<setw(10)<<"第5天"<<setw(10)<<"第6天"
		<<setw(10)<<"第7天"<<setw(12)<<"平均步数"<<endl; 
		
	for(i=0;i<n;i++)
	{
		cout<<setw(15)<<UList[i].e.id
			<<setw(10)<<UList[i].e.name;
		
		for(j=0;j<7;j++)
		{
			cout<<setw(10)<<UList[i].e.stepnum[j]; 			
		} 
		cout<<setw(12)<<UList[i].step;
		cout<<endl;	
	}
	
}



/*
void  ShowWeeklyList(SqList &L)        //一周排行榜 
{
	string id;
	int step;
	
	int i,j;
	cout<<"请输入要显示的用户号：";
	cin>>id;
	
	i=SearchUser_Byid(L,id);
	if(i==-1)
		cout<<"该用户不存在！"<<endl;
	else
	{
		cout<<"该用户一周的运动数据如下："<<endl;
	cout<<setw(15)<<"用户号"<<setw(10)<<"姓名"
		<<setw(10)<<"第1天"<<setw(10)<<"第2天"<<setw(10)<<"第3天"
		<<setw(10)<<"第4天"<<setw(10)<<"第5天"<<setw(10)<<"第6天"
		<<setw(10)<<"第7天"<<setw(12)<<"平均步数"<<endl;
		
		for(j=0;j<7;j++)
		{
			cout<<setw(10)<<L.elem[i].stepnum[j]; 			
		} 
		cout<<setw(12)<<SportsInfo_Average(L,i);
		cout<<endl;		
	}
}
*/ 



 
