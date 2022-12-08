/*
文件名：RankingList.h 
功  能：运动排行榜 
*/
#ifndef _RANKINGLIST_H_
#define _RANKINGLIST_H_


#include"UserMng.h"

struct UserOrderList
{
	ElemType e; 
	int step;
};

void ShowTodayList(SqList &L);          //显示当天运动排行榜 
 
void  ShowcontinuousDays(SqList &L);    //所有人连续运动天数排行榜 

void  ShowWeeklyList(SqList &L);        //一周排行榜 



#endif


