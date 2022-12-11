#pragma once
#include<stdio.h>
#include<assert.h>
#include <stdlib.h>
#include<string.h>

//�˶���Ϣ
//typedef struct MoveNode
//{
//	int StepNum;//�˶�����
//	int MoveDay;
//	int Con_Day;//��������
//	struct MoveNode* next;
//}Move;

//�û���Ϣ
typedef struct UserNode
{
	char telephone[20];
	char nickname[20];
	int sex;//0ΪŮ��1λ�С�
	int age;
	int move[7];
	//Move move;//Ƕ��һ���ṹ�壬���˶���Ϣ���û�����һ��
	struct UserNode* next;
}User;

//��ӡ�û���Ϣ��
void UserPrint(User* phead);//��ӡȫ���û���Ϣ
void PerUserPrint(User* phead);//��ӡ�û���Ϣ

//�����û�
User* BuyUser(char telephone[20], char nickname[20], int sex, int age);//�����ռ�
void UserPushFront(User** pphead, char telephone[20], char nickname[20], int sex, int age);//ͷ�壬������û���

//ɾ���û�:�ɸ����û��ź��ǳƽ���ɾ����ɾ��֮ǰ�Ȳ�ѯ���ҵ������Ҫ��ɾ��ȷ�ϲſ������ɾ��������
User* UserNumFind(User* phead, char telephone[12]);//�û���
User* UserNameFind(User* phead, char nickname[20]);//�ǳ�
User* UserConDayFind(User* phead, int day);//��������
void UserPopFront(User** pphead);//ͷɾ
void UserErase(User** pphead, User* pos);// ɾ��posλ��




//��ѯ�û����ɸ����û��š��Ա������˶������Ƚ��в�ѯ��Ҫ����ʾ���з�����������Ϣ��
User* UserSexFind(User* phead, int sex);//0ΪŮ��1Ϊ��
User* UserCon_DayFind(User* phead, int day);//��������




