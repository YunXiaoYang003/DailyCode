/*
文件名：DataLoad.h 
功  能：数据加载（读取文件，保存到文件） 
*/
#ifndef _DATALOAD_H_
#define  _DATALOAD_H_

#include"UserMng.h"
#include<fstream>
using namespace std;


void  ReadFile(SqList &L);        //读取文件 
void  WriteFile(SqList &L);        //保存文件 

#endif
