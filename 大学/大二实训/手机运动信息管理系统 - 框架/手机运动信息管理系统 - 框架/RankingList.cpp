/*
�ļ�����RankingList.h 
��  �ܣ��˶����а� ��ʵ�� 
*/
#include"RankingList.h"

//UserOrderList UList[MAXSIZE];

void ShowTodayList(SqList &L)       //��ʾ�����˶����а� 
{
	UserOrderList t,UList[MAXSIZE];
	int n=L.length,i,k,j;
	
	if(n<=0)	
	{
		cout<<"�û���ϢΪ�գ�"<<endl;
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
	
	cout<<setw(15)<<"�û���"<<setw(10)<<"����"
		<<setw(8)<<"�Ա�"<<setw(8)<<"����"
		<<setw(15)<<"���ղ���"
		<<endl;
		
	for(int i=0;i<n ;i++)
	{		
		cout<<setw(15)<<UList[i].e.id
			<<setw(10)<<UList[i].e.name
			<<setw(8)<<((UList[i].e.sex=='f')?"Ů":"��")
			<<setw(8)<<UList[i].e.age
			<<setw(15)<<UList[i].e.stepnum[6]			
			<<endl;
	}
} 
 
void  ShowcontinuousDays(SqList &L)    //�����������˶��������а� 
{
	UserOrderList t,UList[MAXSIZE];
	int n=L.length,i,k,j;
	
	if(n<=0)	
	{
		cout<<"�û���ϢΪ�գ�"<<endl;
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
	
	cout<<setw(15)<<"�û���"<<setw(10)<<"����"
		<<setw(8)<<"�Ա�"<<setw(8)<<"����"
		<<setw(10)<<"��1��"<<setw(10)<<"��2��"<<setw(10)<<"��3��"
		<<setw(10)<<"��4��"<<setw(10)<<"��5��"<<setw(10)<<"��6��"
		<<setw(10)<<"��7��"		
		<<setw(15)<<"�����˶�����"
		<<endl;
		
	for(int i=0;i<n ;i++)
	{		
		cout<<setw(15)<<UList[i].e.id
			<<setw(10)<<UList[i].e.name
			<<setw(8)<<((UList[i].e.sex=='f')?"Ů":"��")
			<<setw(8)<<UList[i].e.age;
			
		for(int j=0;j<7;j++)
		{
			cout<<setw(10)<<UList[i].e.stepnum[j]; 			
    	}
		cout<<setw(15)<<UList[i].step			
			<<endl;
	}
}

void  ShowWeeklyList(SqList &L)        //һ�����а� 
{
	UserOrderList t,UList[MAXSIZE];
	
	int n=L.length,i,k,j;
	
	if(n<=0)	
	{
		cout<<"�û���ϢΪ�գ�"<<endl;
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
		
	cout<<setw(15)<<"�û���"<<setw(10)<<"����"
		<<setw(10)<<"��1��"<<setw(10)<<"��2��"<<setw(10)<<"��3��"
		<<setw(10)<<"��4��"<<setw(10)<<"��5��"<<setw(10)<<"��6��"
		<<setw(10)<<"��7��"<<setw(12)<<"ƽ������"<<endl; 
		
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
void  ShowWeeklyList(SqList &L)        //һ�����а� 
{
	string id;
	int step;
	
	int i,j;
	cout<<"������Ҫ��ʾ���û��ţ�";
	cin>>id;
	
	i=SearchUser_Byid(L,id);
	if(i==-1)
		cout<<"���û������ڣ�"<<endl;
	else
	{
		cout<<"���û�һ�ܵ��˶��������£�"<<endl;
	cout<<setw(15)<<"�û���"<<setw(10)<<"����"
		<<setw(10)<<"��1��"<<setw(10)<<"��2��"<<setw(10)<<"��3��"
		<<setw(10)<<"��4��"<<setw(10)<<"��5��"<<setw(10)<<"��6��"
		<<setw(10)<<"��7��"<<setw(12)<<"ƽ������"<<endl;
		
		for(j=0;j<7;j++)
		{
			cout<<setw(10)<<L.elem[i].stepnum[j]; 			
		} 
		cout<<setw(12)<<SportsInfo_Average(L,i);
		cout<<endl;		
	}
}
*/ 



 
