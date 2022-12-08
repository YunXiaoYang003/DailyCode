/*
文件名：route.h 
功  能：运动路线的头文件 
*/
#ifndef  _ROUTE_H_
#define  _ROUTE_H_
#include <iostream>
#include <iomanip>
#include <fstream>
#include "Stack.h"

using namespace std;
#define MAXNUM 100
#define MAXINT 32767

typedef string VerTexType;
typedef double ArcType;

typedef struct 
{
	VerTexType vexs[MAXNUM];
	ArcType arcs[MAXNUM][MAXNUM];
	int vexnum,arcnum;
}AMGraph;

typedef  struct 
{
	bool Source[MAXNUM];
	double Destination[MAXNUM];
	int Path[MAXNUM];
}ShortPath;

void CreateUDG(AMGraph  &G);
int LocateVex(AMGraph  &G, VerTexType vexname);
void ShowGraph(AMGraph  &G);
void FindRout(AMGraph  &G,ShortPath &P);

#endif 




