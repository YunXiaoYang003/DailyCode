#ifndef _STACK_H_
#define _STACK_H_
#include <iostream>
#include <stdlib.h>
using namespace std;
#define OK1 1
#define ERROR1 0
#define MAXSIZE1 100

typedef int status;
typedef int SElemType;

typedef struct
{
	SElemType *elem;
	int top;
	double length;
}SqStack;
typedef SqStack *LinkStack;
status InitStack(LinkStack S,int i);
status Push(LinkStack S,int i, SElemType e);
status Pop(LinkStack S,int i, SElemType &e);
bool StackEmpty(LinkStack S,int i);

#endif
