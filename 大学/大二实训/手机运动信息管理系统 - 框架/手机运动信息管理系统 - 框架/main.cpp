/*
文件名：main.cpp 
功  能：系统主函数 
*/
#include <iostream>
using namespace std;
#include <stdlib.h>
#include "Menu.h"

int main()
{
	
	SqList L;
	
	InitList(L);		
	Menu(L);
		
	return 0;
	
}
