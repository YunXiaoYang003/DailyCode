#include "user.h"
#define _CRT_SECURE_NO_WARNINGS 1

//增加用户
User* BuyUser( char telephone[11], char nickname[20], int sex, int age)//创建空间
{
	User* newnode = (User*)malloc(sizeof(User));
	if (newnode == NULL)
	{
		perror("malloc fail");
		exit(-1);
	}
	for (int i = 0; i < 11; i++)
	{
		newnode->telephone[i] = telephone[i];
	}
	for (int i = 0; i < 11; i++)
	{
		newnode->nickname[i] = nickname[i];
	}
	newnode->sex = sex;
	newnode->age = age;
	newnode->next = NULL;
	return newnode;
}

void UserPushFront(User** pphead, char telephone[11], char nickname[20], int sex, int age)//头插，添加新用户；
{
	assert(pphead);

	User* newnode = BuyUser(telephone, nickname,sex,age);
	newnode->next = *pphead;
	*pphead = newnode;
}

void UserPrint(User* phead)//打印用户信息
{
	User* cur = phead;
	while (cur != NULL)
	{
		printf("%s,%s,%d,%d", cur->telephone, cur->nickname, cur->sex, cur->age);
		cur = cur->next;
		printf("\n");
	}
}


//删除用户
User* UserNumFind(User* phead,char telephone[12])//按用户名查询
{
	User* cur = phead;
	while (cur)
	{
		if (strcmp(cur->telephone,telephone)==0)
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
		if (strcmp(cur->telephone, telephone) == 0)
			return cur;

		cur = cur->next;
	}

	return NULL;
}

