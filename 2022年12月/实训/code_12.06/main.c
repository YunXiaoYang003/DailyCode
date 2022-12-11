#define _CRT_SECURE_NO_WARNINGS 1
#include"user.h"
#include"move.h"
#include<stdio.h>
#include<stdlib.h>
int main()
{
	User* phead = NULL;
	int x;
	//初始化变量
	char telephone[20] = { 0 };
	char nickname[20] = { 0 };
	int sex = 0;//0为女，1位男。
	int age = 18;
	int move[7] = { 0 };
	int StepNum;//运动步数
	int MoveDay;
	int Con_Day;//连续天数

	while (1)
	{
		printf("*****************手机运动信息管理系统*****************\n");
		printf("--------------------用户信息管理----------------------\n");
		printf("1、增加用户  2、删除用户  3、查询用户  4、修改用户\n");
		printf("--------------------运动信息管理--------------------\n");
		printf("5、添加用户运动信息 6、修改用户运动信息 7、显示所有用户运动信息\n");
		printf("--------------------运动排行榜--------------------\n");
		printf("8、当天排行榜 9、连续运动排行榜 10、一周排行榜\n");
		printf("-------------------定制运动路线-------------------\n");
		printf("11、绘制运动路线  12、选择运动路线\n");
		printf("-------------------数据文件操作-------------------\n");
		printf("     13、数据加载              14、数据保存\n");
		printf("                   0、退出\n");
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
			printf("要增加用户的手机号、昵称、性别(0为女，1为男)、年龄分别为：\n");
			printf("要增加用户的手机号:（要求是11位,否则将乱码）");
			scanf("%s",telephone);
			printf("要增加用户的昵称:");
			scanf("%s", nickname);
			printf("要增加用户的性别(0为女，1为男)：");
			scanf("%d", &sex);
			if ((sex !=  0) && (sex != 1))
			{
				printf("输入错误！！！");
				break;
			}
			printf("要增加用户的年龄（不可以小于0或者大于150）：");
			scanf("%d", &age);
			if ((age< 0) && (age>200))
			{
				printf("输入错误！！！");
				break;
			}
			UserPushFront(&phead, telephone, nickname, sex, age);//头插，添加新用户；
			UserPrint(phead);//打印所有用户信息
			MoveInt(phead);//初始化运动数据
		}
		continue;
		case 2://删除用户:可根据用户号和昵称进行删除。删除之前先查询，找到后必须要有删除确认才可以完成删除操作。
		{
			int i = 0;
			printf("你可以根据用户号或用户昵称两种方式查询用户信息并进行删除，请选择查询模式：  1.根据用户号   2.昵称：\n");
			scanf("%d", &i);
			switch (i)
			{
				//增加用户:要求输入用户的用户号（手机号）、昵称、性别、年龄等信息。运动步数在运动信息管理中添加，平均步数和连续运动天数通过计算获得。
			case 1:// 1.根据用户号
			{
				printf("请输入要查询的用户号：");
				scanf("%s", telephone);
				User* cur = UserNumFind(phead, telephone);
				if (cur == NULL)
					printf("输入用户名错误，当前没有该用户名！");
				else
					printf("找到了！\n请问是否确定删除？ 1.确认删除  2.不了不了\n");
				int j = 0;
				scanf("%d", &j);
				if (j == 1)
					UserErase(&phead, cur);// 删除cur位置
				UserPrint(phead);//打印所有用户信息
			}
			break;
			case 2:
			{
				printf("请输入要查询的用户昵称：");
				scanf("%s", nickname);
				User* cur = UserNameFind(phead, nickname);
				if (cur == NULL)
					printf("输入用户名错误，当前没有该用户昵称！");
				else
					printf("找到了！\n请问是否确定删除？ 1.确认删除  2.不了不了");
				int j = 0;
				scanf("%d", &j);
				if (j == 1)
					UserErase(&phead, cur);// 删除cur位置
				UserPrint(phead);//打印所有用户信息
			}
			break;
			default:
				printf("输入错误！\n");
				break;
			}
		}
		continue;
		case 3://查询用户：可根据用户号、性别、连续运动天数等进行查询。要求显示所有符合条件的信息。
		{
			int i = 0;
			printf("你可以根据用户号、性别、连续运动天数等进行查询，请选择你要查询的方式：1.用户名  2.性别  3.连续运动天数\n");
			scanf("%d", &i);
			switch (i)
			{
			case 1://1.用户号  
			{
				printf("请输入要查询的用户号：");
				scanf("%s", telephone);
				User* cur = UserNumFind(phead, telephone);
				if (cur == NULL)
					printf("输入用户名错误，当前没有该用户名！");
				else
					printf("找到了！\n");
				UserPrint(phead);//打印所有用户信息
			}
			break;
			case 2://2.性别
			{		printf("请输入要查询的性别：");
			scanf("%d", &sex);
			User* cur = UserSexFind(phead, sex);
			if (cur == NULL)
			{
				printf("输入性别错误，当前没有该性别！\n");
			}
			else
				printf("找到了！\n");
			UserPrint(phead);//打印所有用户信息
			}
			break;
			case 3://3.连续运动天数
			{
				printf("请输入要查询的连续运动天数：");
				scanf("%d", &Con_Day);
				User* cur = UserConDayFind(phead, Con_Day);
				if (cur == NULL)
					printf("输入连续运动天数错误，当前没有该连续运动天数！");
				else
					printf("找到了！\n");
				UserPrint(cur);//打印所有用户信息
			}
			break;
		    defalut:
			printf("输入错误！");
			break;
			}
		}
		continue;
		case 4://修改用户:可以修改的用户信息包括用户号、昵称、性别、年龄等。修改用户号后一定要保证新的用户号是唯一的。			
		{
			printf("请输入要修改的用户信息的用户号：");
			scanf("%s", telephone);
			User* cur = UserNumFind(phead, telephone);
			if (cur == NULL)
				printf("输入用户号错误，当前没有该用户号！");
			else
			{
				printf("找到了！\n");
				printf("请输入你要修改的用户信息： 1.用户号  2.昵称  3.性别  4.年龄");
				int i = 0;
				scanf("%d", &i);
				switch (i)
				{
				case 1://1.用户名  			
				{
					char mid[12] = { 0 };
					printf("请输入要修改的用户号：（请确保新用户号是唯一的）");
					scanf("%s", mid);
					User* pre = phead;
					while (pre != NULL)
					{
						if (strcmp(cur->telephone, mid) == 0)
							printf("输入新用户不唯一！！！");
						pre = pre->next;
					}
					strcpy(cur->telephone, mid);
				}
				break;
				case 2:
				{
					char mid[20] = { 0 };
					printf("请输入要修改的用户昵称：");
					scanf("%s", mid);
					strcpy(cur->nickname, mid);
				}
				break;
				case 3:
				{
					int sex = 0;
					printf("请输入要修改的用户性别：");
					scanf("%d", sex);
					cur->sex = sex;
				}
				break;
				case 4:
				{
					int age = 0;
					printf("请输入要修改的用户年龄：");
					scanf("%d", age);
					cur->age = age;
				}
				break;
				default :
				printf("输入错误！");
				break;
				}
			}
			
		}
		continue;
		case 5://添加用户运动信息
		{
			printf("请输入你要添加的用户的用户号：");
			scanf("%s", telephone);
			User* cur = UserNumFind(phead, telephone);
			if (cur == NULL)
				printf("输入用户名错误，当前没有该用户名！");
			else
				printf("找到了！\n");
			int today = IsDay(cur->move);//6,5,4,3,2,1,0
			printf("请输入今天的运动步数：");
			scanf("%d", &StepNum);
			OrderDay(cur->move, today, StepNum);//天数顺序，是否满七天,插入数据
		}
			continue;
		case 6://6、修改用户运动信息
		{
			printf("请输入你要添加的用户的用户号：");
			scanf("%s", telephone);
			User* cur = UserNumFind(phead, telephone);
			if (cur == NULL)
				printf("输入用户名错误，当前没有该用户名！");
			else
				printf("找到了！\n");
			int today = IsDay(cur->move);//6,5,4,3,2,1,0
			printf("请输入要修改为的运动步数：");
			scanf("%d", &StepNum);
			cur->move[today] = StepNum;
		}
			continue;
		case 7://显示所有用户运动信息
		{
			MovePrint(phead);
		}
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
