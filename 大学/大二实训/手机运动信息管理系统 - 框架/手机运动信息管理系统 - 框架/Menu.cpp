/*
�ļ�����Menu.cpp 
��  �ܣ��˵������ʵ�� 
*/
#include"Menu.h"

void Menu(SqList &L)
{
		int choice;
		while(1)
		{ 
			cout<<"*********************�ֻ��˶���Ϣ����ϵͳ*********************"<<endl; 
			cout<<"*      1.�û���Ϣ����                    2.�˶���Ϣ����      *"<<endl;
			cout<<"*      3.�˶����а�                      4.�����˶�·��      *"<<endl;
			cout<<"*      5.�����ļ�����                    0.ϵͳ�˳�          *"<<endl;
			cout<<"**************************************************************"<<endl;
			cout<<"��ѡ�������0-5����";
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
					cout<<"��ӭ���ٴ�ʹ�ñ�ϵͳ���ټ���"<<endl;
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
		cout<<"***********************�û���Ϣ����ϵͳ************************************"<<endl; 
		cout<<"*   1.����û�  2.ɾ���û�  3.��ѯ�û�  4.�޸��û�  5.��ʾȫ��   0.�˳�   *"<<endl;
		cout<<"***************************************************************************"<<endl;
		cout<<"��ѡ�������0-4����";
		cin>>choice;
		
		switch(choice)
		{
			case 1:		
				AddUser(L); 	break;       //����û� 
			case 2:		
				break;
			case 3:	
				break;
			case 4:
				break;	
			case 5:
				//�����жϣ����û���û�������ʾ
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

