#include "user.h"
#include"move.h"
#define _CRT_SECURE_NO_WARNINGS 1



void UserPrint(User* phead)//��ӡȫ���û���Ϣ
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



//�����û�
User* BuyUser( char telephone[20], char nickname[20], int sex, int age)//�����ռ�
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

void UserPushFront(User** pphead, char telephone[20], char nickname[20], int sex, int age)//ͷ�壬������û���
{
	assert(pphead);

	User* newnode = BuyUser(telephone, nickname,sex,age);
	newnode->next = *pphead;
	*pphead = newnode;
}





//ɾ���û�
User* UserNumFind(User* phead, char telephone[12])//���û�����ѯ
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

User* UserNameFind(User* phead, char nickname[20])//���û��ǳƲ�ѯ
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

void UserPopFront(User** pphead)//ͷɾ
{
	assert(pphead);

	// ����ļ��
	if (*pphead == NULL)
	{
		return;
	}

	User* del = *pphead;
	*pphead = (*pphead)->next;
	free(del);
	del = NULL;
}

void UserErase(User** pphead, User* pos)// ɾ��posλ��
{
	assert(pphead);//���ԣ���ֹppheadΪ��
	assert(pos);//���ԣ���ֹposΪ��

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

			// ���pos���������нڵ㣬����������
			assert(prev);
		}

		prev->next = pos->next;
		free(pos);
		//pos = NULL;
	}
}

//��ѯ�û����ɸ����û��š��Ա������˶������Ƚ��в�ѯ��Ҫ����ʾ���з�����������Ϣ��
User* UserSexFind(User* phead, int sex)//0ΪŮ��1Ϊ��
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
User* UserConDayFind(User* phead, int day)//��������
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