/*
�ļ�����SqList.cpp 
��  �ܣ�˳���Ļ�����������ʼ�������룬ɾ������ʵ�� 
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

