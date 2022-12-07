#define _CRT_SECURE_NO_WARNINGS 1
#include"user.h"
#include<stdio.h>
#include<stdlib.h>
int main()
{
	User* phead = NULL;
	int x;
	//初始化变量
	char telephone[12] = { 0 };
	char nickname[20];
	int sex = 0;//0为女，1位男。
	int age = 18;


	while (1)
	{
		printf("*****************手机运动信息管理系统*****************\n");
		printf("--------------------用户信息管理----------------------\n");
		printf("1、增加用户  2、删除用户  3、查询用户  4、修改用户\n");
		printf("--------------------运动信息管理--------------------\n");
		printf("5、添加用户信息 6、修改用户信息 7、显示所有用户运动信息\n");
		printf("--------------------运动排行榜--------------------\n");
		printf("8、当天排行榜 9、连续运动排行榜 10、一周排行榜\n");
		printf("-------------------定制运动路线-------------------\n");
		printf("11、绘制运动路线  12、选择运动路线\n");
		printf("-------------------数据文件操作-------------------\n");
		printf("     13、数据加载              14、数据保存\n");
		printf("\n");
		printf("                                         0、退出\n");
		printf("*****************************************************\n");
		printf("请选择操作（输入0-14）\n");
		scanf("%d", &x);
		switch (x)
		{
		case 0:
			printf("谢谢您使用本系统，再见！！\n");
			return 1;
		case 1://增加用户
		{
			printf("请输入要增加用户的个人信息：\n");
			printf("要增加用户的手机号、昵称、性别(0为女，1为男)、年龄分别为：（以空格分隔）\n");
			scanf("%s %s %d %d", telephone, nickname, &sex, &age);
				UserPushFront(&phead, telephone, nickname, sex, age);//头插，添加新用户；

				UserPrint(phead);//打印所有用户信息

			continue;
		}
		case 2://删除用户
		{
			int i = 0;
			printf("你可以根据用户号或用户昵称两种方式查询用户信息并进行删除，请选择查询模式：  1.根据用户号   2.昵称：\n");
			scanf("%d", &i);
			switch (i)
			{
			case 1:// 1.根据用户号
			{
				printf("\n请输入要查询的用户号：");
				scanf("%s", telephone);
				User* cur = UserNumFind(phead, telephone);
				if (cur == NULL)
				{
					printf("输入用户名错误，当前没有该用户名！");
				}
				else
					printf("找到了！\n请问是否确定删除？ 1.确认删除  2.不了不了\n");
				int j = 0;
				scanf("%d", &j);
				if (j == 1)
				{
					UserErase(&phead, cur);// 删除cur位置
				}
				
				UserPrint(phead);//打印所有用户信息

			}
			   break;
			case 2:
			{
				printf("\n请输入要查询的用户昵称：");
				scanf("%s", nickname);
				User* cur = UserNameFind(phead, nickname);
				if (cur == NULL)
				{
					printf("输入用户名错误，当前没有该用户昵称！");
				}
				else
					printf("找到了！\n请问是否确定删除？ 1.确认删除  2.不了不了");
				int j = 0;
				scanf("%d", &j);
				if (j == 1)
				{
					UserErase(&phead, cur);// 删除cur位置
				}
				
				UserPrint(phead);//打印所有用户信息

			}
			  break;
			default:
				printf("输入错误！\n");
				break;

			}
			continue;
		}			
		case 3:
			continue;
		case 5:
			continue;
		case 6:
			continue;
		case 7:
			continue;
		case 8:
			continue;
		case 9:
			continue;
		case 10:
			continue;
		case 11:
			continue;
		case 12:
			continue;
		case 13:
			continue;
		case 14:
			continue;
		}
	}
	return 0;
}