/*
文件名：UserMng.h 
功  能：用户信息的管理 
*/
#ifndef _USERMNG_H_ 
#define _USERMNG_H_ 

#include"SqList.h"

void  AddUser(SqList &L);                            //添加用户
bool  IsValid_UserId(string id);                      //判断用户号是否合法
void  PrintUser(SqList &L);                         //显示所有用户
void  ShowTitle() ;
void  ShowUserByi(SqList &L,int i);

//int   SportsInfo_Average(SqList L, int i);           //计算第i个用户的平均步数 
//int   SportsInfo_continuousDays(SqList L, int i);    //计算 第i个用户连续运动天数
 
#endif

