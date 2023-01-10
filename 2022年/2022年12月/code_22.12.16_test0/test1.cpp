#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string.h>
#include <stack>
#include<stdio.h>
using namespace std;
#define MAX 100
#define INF 0x3f3f3f3f
#define me(a,b) memset(a,b,sizeof(b))
int dist[MAX], path[MAX];//储存最短距离和路径
struct MGraph
{
    int edges[MAX][MAX];//邻接矩阵，记录的是两点之间的距离，也就是权值
    int e, n;//边数和顶点数
} G;
void init()
{
    memset(G.edges, INF, sizeof(G.edges));
    //me(G.edges,(INF));
    for (int i = 0; i < G.n; i++)
        G.edges[i][i] = 0;
}
void printf_MG()
{
    for (int i = 0; i < G.n; i++)
    {
        for (int j = 0; j < G.n; j++)
        {
            if (G.edges[i][j] == INF)
                printf("∞ ");
            else
                printf("%2d ", G.edges[i][j]);
        }
        printf("\n");
    }
}
void Dijkstra(MGraph g, int u)
{
    int U[MAX], mmin;//分别表示已经遍历过的点、距当前起始点最近的点的距离
    //对各数组进行初始化
    memset(U, 0, sizeof(U));
    memset(path, -1, sizeof(path));
    //me(dist,INF);
    for (int i = 0; i < g.n; i++)
    {
        dist[i] = g.edges[u][i];
        if (g.edges[u][i] < INF)
            path[i] = u;
    }
    dist[u] = 0;//到本身的距离
    for (int i = 0; i < g.n; i++) //求出源点到n个点的最短距离
    {
        mmin = INF;
        U[u] = 1;//将选出的新的起始点放入U数组中
        for (int j = 0; j < g.n; j++)
            //这个if判断顶点u的加入是否会出现通往顶点j的更短的路径，如果出现，则改变原来路径及其长度，否则什么都不做
        {
            if (!U[j] && dist[u] + g.edges[u][j] < dist[j])
            {
                dist[j] = dist[u] + g.edges[u][j];//更新路径长度
                path[j] = u;//更新到顶点j的路径
            }
        }
        for (int j = 0; j < g.n; j++)
            //这个循环每次从剩余顶点中选出一个顶点，通往这个顶点的路径在通往所有剩余顶点的路径中是长度最短的
        {
            if (U[j] == 0 && dist[j] < mmin)
            {
                u = j;
                mmin = dist[j];
            }
        }
    }
}
void printf_path(int u, int x)
{
    int a[MAX], cou = 0, ex = x;
    if (u == x)
        printf("%d-->%d=0", u, x);
    else if (path[x] == -1)
        printf("%d-->%d=∞", u, x);//没有路径
    else
    {
        while (x != u)
        {
            a[cou++] = x;
            x = path[x];
        }
        a[cou] = x;
        for (int i = cou; i > 0; i--)
            printf("%d-->", a[i]);
        printf("%d=%d", a[0], dist[ex]);
    }
    printf("\n");
}
int main()
{
    int v1, v2, w;
    scanf("%d%d", &G.e, &G.n);//输入边数和顶点数
    init();
    for (int i = 0; i < G.e; i++)
    {
        scanf("%d%d%d", &v1, &v2, &w);
        G.edges[v1][v2] = w;
        G.edges[v2][v1] = w;
    }
    printf_MG();//输出邻接矩阵
    int u;
    scanf("%d", &u);//输入源点
    Dijkstra(G, u);
    for (int i = 0; i < G.n; i++)//输出源点到每个点的最短路径以及路径长路
        printf_path(u, i);
    return 0;
}
/*
13 10
0 1 10
0 2 15
1 3 20
1 4 5
2 5 8
2 6 6
3 7 7
4 5 10
4 7 3
4 8 4
5 6 9
5 8 3
6 8 12
*/

