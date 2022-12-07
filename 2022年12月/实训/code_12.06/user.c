#include "user.h"
#define _CRT_SECURE_NO_WARNINGS 1

//�����û�
User* BuyUser( char telephone[11], char nickname[20], int sex, int age)//�����ռ�
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

void UserPushFront(User** pphead, char telephone[11], char nickname[20], int sex, int age)//ͷ�壬������û���
{
	assert(pphead);

	User* newnode = BuyUser(telephone, nickname,sex,age);
	newnode->next = *pphead;
	*pphead = newnode;
}

void UserPrint(User* phead)//��ӡ�û���Ϣ
{
	User* cur = phead;
	while (cur != NULL)
	{
		printf("%s,%s,%d,%d", cur->telephone, cur->nickname, cur->sex, cur->age);
		cur = cur->next;
		printf("\n");
	}
}


//ɾ���û�
User* UserNumFind(User* phead,char telephone[12])//���û�����ѯ
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

User* UserNameFind(User* phead, char nickname[20])//���û��ǳƲ�ѯ
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

