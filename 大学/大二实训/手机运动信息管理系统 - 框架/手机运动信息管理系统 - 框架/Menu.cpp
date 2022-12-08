/*
文件名：Menu.cpp 
功  能：菜单管理的实现 
*/
#include"Menu.h"

void Menu(SqList &L)
{
		int choice;
		while(1)
		{ 
			cout<<"*********************手机运动信息管理系统*********************"<<endl; 
			cout<<"*      1.用户信息管理                    2.运动信息管理      *"<<endl;
			cout<<"*      3.运动排行榜                      4.定制运动路线      *"<<endl;
			cout<<"*      5.数据文件操作                    0.系统退出          *"<<endl;
			cout<<"**************************************************************"<<endl;
			cout<<"请选择操作（0-5）：";
			cin>>choice;
			
			switch(choice)
			{
				case 1:		Menu_UserMng(L);	break; 
				case 2:							break;
				case 3:		 					break;
				case 4:     	                break; 
				case 5:
									break;
				case 0:
					cout<<"欢迎您再次使用本系统，再见！"<<endl;
					exit(0); 
			} 
			system("pause");
			system("cls");			 
		}
}

void  Menu_UserMng(SqList &L)
{
	int choice;
	system("cls");
	while(1)
	{
		cout<<"***********************用户信息管理系统************************************"<<endl; 
		cout<<"*   1.添加用户  2.删除用户  3.查询用户  4.修改用户  5.显示全部   0.退出   *"<<endl;
		cout<<"***************************************************************************"<<endl;
		cout<<"请选择操作（0-4）：";
		cin>>choice;
		
		switch(choice)
		{
			case 1:		
				AddUser(L); 	break;       //添加用户 
			case 2:		
				break;
			case 3:	
				break;
			case 4:
				break;	
			case 5:
				//加入判断，如果没有用户进行提示
				PrintUser(L);
				cout<<endl; 
				break;		 
			case 0:
				return;
		}
		system("pause");
		system("cls");	
	}
}

