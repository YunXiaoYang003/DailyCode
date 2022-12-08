#pragma once
#include<stdio.h>
#include<assert.h>
#include <stdlib.h>
#include<string.h>

//�˶���Ϣ
typedef struct MoveNode
{
	int StepNum;//�˶�����
	int MoveDay;
	int Con_Day;//��������
	struct MoveNode* next;
}Move;

//�û���Ϣ
typedef struct UserNode
{
	char telephone[12];
	char nickname[20];
	int sex;//0ΪŮ��1Ϊ�С�
	int age;
	Move move;//Ƕ��һ���ṹ�壬���˶���Ϣ���û�����һ��
	struct UserNode* next;
}User;

//��ӡ�û���Ϣ��
void UserPrint(User* phead);

//�����û�
User* BuyUser(char telephone[11], char nickname[20], int sex, int age);//�����ռ�
void UserPushFront(User** pphead, char telephone[11], char nickname[20], int sex, int age);//ͷ�壬������û���

//ɾ���û�
User* UserNumFind(User* phead, char telephone[12]);
User* UserNameFind(User* phead, char nickname[20]);
void UserPopFront(User** pphead);//ͷɾ
void UserErase(User** pphead, User* pos);// ɾ��posλ��

//��ѯ�û����ɸ����û��š��Ա������˶������Ƚ��в�ѯ��Ҫ����ʾ���з�����������Ϣ��
User* UserNumFind(User* phead, char telephone[12]);
User* UserSexFind(User* phead, int sex);//0ΪŮ��1Ϊ��




