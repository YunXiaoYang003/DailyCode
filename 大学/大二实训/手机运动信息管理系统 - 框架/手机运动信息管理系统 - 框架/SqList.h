/*
文件名：SqList.h 
功  能：顺序表的基本操作（初始化，插入，删除） 
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
	ElemType *elem;            //ElemType 元素的 数据类型 
	int length;
}SqList;                       //存储结构定义，类型 

Status InitList(SqList &L);                          //初始化
Status ListInsert(SqList &L,ElemType e);             //插入
//Status ListDelete(SqList &L,int i);                  //删除 
//Status ListEdit(SqList &L,int i,int type,User e);

#endif
