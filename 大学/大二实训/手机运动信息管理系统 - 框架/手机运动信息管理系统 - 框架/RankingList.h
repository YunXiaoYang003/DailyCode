/*
�ļ�����RankingList.h 
��  �ܣ��˶����а� 
*/
#ifndef _RANKINGLIST_H_
#define _RANKINGLIST_H_


#include"UserMng.h"

struct UserOrderList
{
	ElemType e; 
	int step;
};

void ShowTodayList(SqList &L);          //��ʾ�����˶����а� 
 
void  ShowcontinuousDays(SqList &L);    //�����������˶��������а� 

void  ShowWeeklyList(SqList &L);        //һ�����а� 



#endif


