/*
�ļ�����SqList.h 
��  �ܣ�˳���Ļ�����������ʼ�������룬ɾ���� 
*/
#ifndef _SQLIST_H_
#define _SQLIST_H_

#include<iostream>
#include<iomanip>
using namespace std;
#include<stdlib.h>
#include"User.h"

#define OK  1
#define ERROR -1
#define OVERFLOW -2

typedef int Status;
typedef User ElemType;

#define MAXSIZE  100

typedef struct 
{
	ElemType *elem;            //ElemType Ԫ�ص� �������� 
	int length;
}SqList;                       //�洢�ṹ���壬���� 

Status InitList(SqList &L);                          //��ʼ��
Status ListInsert(SqList &L,ElemType e);             //����
//Status ListDelete(SqList &L,int i);                  //ɾ�� 
//Status ListEdit(SqList &L,int i,int type,User e);

#endif
