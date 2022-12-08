/*
文件名：SqList.cpp 
功  能：顺序表的基本操作（初始化，插入，删除）的实现 
*/

#include"SqList.h"

Status InitList(SqList &L)
{
	L.elem=new ElemType[MAXSIZE];
	if(!L.elem)		return ERROR;         
	L.length=0;
	return OK;
} 

Status ListInsert(SqList &L,ElemType e)
{
	if(L.length>=MAXSIZE) return ERROR;
	
	L.elem[L.length]=e;
	L.length++;	
	return OK; 
}

