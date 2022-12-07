#pragma once
#include<stdio.h>
#include<assert.h>
#include <stdlib.h>
#include<string.h>

//运动信息
typedef struct MoveNode
{
	int StepNum;//运动步数
	int MoveDay;
	int Con_Day;//连续天数
	struct MoveNode* next;
}Move;

//用户信息
typedef struct UserNode
{
	char telephone[12];
	char nickname[20];
	int sex;//0为女，1为男。
	int age;
	Move move;//嵌套一个结构体，将运动信息与用户连接一起
	struct UserNode* next;
}User;

//增加用户
User* BuyUser(char telephone[11], char nickname[20], int sex, int age);//创建空间
void UserPushFront(User** pphead, char telephone[11], char nickname[20], int sex, int age);//头插，添加新用户；
void UserPrint(User* phead);

//删除用户
User* UserNumFind(User* phead, char telephone[12]);
User* UserNameFind(User* phead, char nickname[20]);
void UserPopFront(User** pphead);//头删
void UserErase(User** pphead, User* pos);// 删除pos位置


