#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#define Max 503
#define INF 0xcffff

using namespace std;

typedef struct AMGraph {						//定义邻接矩阵
	int vex;//顶点个数
	int arc;//边的数
	int arcs[Max][Max];
};



void Floyd(AMGraph& G);						//弗洛伊德算法


void find(int x, int y);						//输出路径


void putin(AMGraph& G);						//输入图


void putout(AMGraph& G);						//输出最短路矩阵、起点v1到各点的最短距离和路径