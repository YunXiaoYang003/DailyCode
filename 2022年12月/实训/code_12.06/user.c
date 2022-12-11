#include "user.h"
#include"move.h"
#define _CRT_SECURE_NO_WARNINGS 1



void UserPrint(User* phead)//打印全部用户信息
{
	User* cur = phead;
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	while (cur != NULL)
	{
		printf("          %s,%s,%d,%d", cur->telephone, cur->nickname, cur->sex, cur->age);
		cur = cur->next;
		printf("\n");
	}
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}



//增加用户
User* BuyUser( char telephone[20], char nickname[20], int sex, int age)//创建空间
{
	User* newnode = (User*)malloc(sizeof(User));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	for (int i = 0; i < 12; i++)
	{
		newnode->telephone[i] = telephone[i];
	}
	for (int i = 0; i < 20; i++)
	{
		newnode->nickname[i] = nickname[i];
	}
	newnode->sex = sex;
	newnode->age = age;
	newnode->next = NULL;
	return newnode;
}

void UserPushFront(User** pphead, char telephone[20], char nickname[20], int sex, int age)//头插，添加新用户；
{
	assert(pphead);

	User* newnode = BuyUser(telephone, nickname,sex,age);
	newnode->next = *pphead;
	*pphead = newnode;
}





//删除用户
User* UserNumFind(User* phead, char telephone[12])//按用户名查询
{
	User* cur = phead;
	while (cur)
	{
		if (strcmp(cur->telephone, telephone) == 0)
			return cur;

		cur = cur->next;
	}

	return NULL;
}

User* UserNameFind(User* phead, char nickname[20])//按用户昵称查询
{
	User* cur = phead;
	while (cur)
	{
		if (strcmp(cur->nickname, nickname) == 0)
			return cur;

		cur = cur->next;
	}
	return NULL;
}

void UserPopFront(User** pphead)//头删
{
	assert(pphead);

	// 温柔的检查
	if (*pphead == NULL)
	{
		return;
	}

	User* del = *pphead;
	*pphead = (*pphead)->next;
	free(del);
	del = NULL;
}

void UserErase(User** pphead, User* pos)// 删除pos位置
{
	assert(pphead);//断言，防止pphead为空
	assert(pos);//断言，防止pos为空

	if (*pphead == pos)
	{
		UserPopFront(pphead);
	}
	else
	{
		User* prev = *pphead;
		while (prev->next != pos)
		{
			prev = prev->next;

			// 检查pos不是链表中节点，参数传错了
			assert(prev);
		}

		prev->next = pos->next;
		free(pos);
		//pos = NULL;
	}
}

//查询用户：可根据用户号、性别、连续运动天数等进行查询。要求显示所有符合条件的信息。
User* UserSexFind(User* phead, int sex)//0为女，1为男
{
	User* cur = phead;
	while (cur)
	{
		if (sex == cur->sex)
			return cur;

		cur = cur->next;
	}
	return NULL;
}
User* UserConDayFind(User* phead, int day)//连续天数
{
	User* cur = phead;
	while (cur)
	{
		if (day == Con_Day(cur->move))
			return cur;
		cur = cur->next;
	}
	return NULL;
}