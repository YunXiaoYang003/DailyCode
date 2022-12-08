//   文 件 名：stack.cpp                       *
//   功    能：栈的实现功能                    *
#include "stack.h"

status InitStack(LinkStack S,int i)
{
	S[i].elem = new SElemType[MAXSIZE1];
	if (!S[i].elem)   exit(-1);
	S[i].top = 0;
	S[i].length = 0;
	return OK1;
}

status Push(LinkStack S,int i, SElemType e)
{
	if (S[i].top >= MAXSIZE1) return -1;
	S[i].elem[++S[i].top] = e;
	return OK1;
}

status Pop(LinkStack S,int i, SElemType &e)
{
	if (S[i].top == 0) return ERROR1;
	e = S[i].elem[S[i].top--];
	return OK1;
}

bool StackEmpty(LinkStack S,int i)
{
	if (S[i].top == 0) return true;
	else return false;
}

