#define _CRT_SECURE_NO_WARNINGS 1
#include"user.h"
#include<stdio.h>
#include<stdlib.h>
int main()
{
	User* user = NULL;
	int x;
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
			char telephone[11] = { 0 };
			char nickname[20];
			int sex=0;//0为女，1位男。
			int age=18;
			printf("请输入要增加用户的个人信息：\n");
			printf("要增加用户的手机号、昵称、性别、年龄分别为：（以空格分隔）\n");
			scanf("%s %s %d %d", telephone, nickname, &sex, &age);
				UserPushFront(&user, telephone, nickname, sex, age);//头插，添加新用户；
				UserPrint(user);
			continue;
		}
		case 2://删除用户
		{
			int i = 0;
			printf("你可以根据用户号和昵称进行删除，请选择查询模式：  1.根据用户号   2.昵称：");
			scanf("%d", &i);
			switch (i)
			{
			case 1:
				break;
			case 2:
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