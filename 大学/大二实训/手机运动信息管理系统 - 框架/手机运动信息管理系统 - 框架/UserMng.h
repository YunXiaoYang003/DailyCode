/*
�ļ�����UserMng.h 
��  �ܣ��û���Ϣ�Ĺ��� 
*/
#ifndef _USERMNG_H_ 
#define _USERMNG_H_ 

#include"SqList.h"

void  AddUser(SqList &L);                            //����û�
bool  IsValid_UserId(string id);                      //�ж��û����Ƿ�Ϸ�
void  PrintUser(SqList &L);                         //��ʾ�����û�
void  ShowTitle() ;
void  ShowUserByi(SqList &L,int i);

//int   SportsInfo_Average(SqList L, int i);           //�����i���û���ƽ������ 
//int   SportsInfo_continuousDays(SqList L, int i);    //���� ��i���û������˶�����
 
#endif

