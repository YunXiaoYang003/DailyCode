#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string.h>
#include <stack>
#include<stdio.h>
using namespace std;
#define MAX 100
#define INF 0x3f3f3f3f
#define me(a,b) memset(a,b,sizeof(b))
int dist[MAX], path[MAX];//������̾����·��
struct MGraph
{
    int edges[MAX][MAX];//�ڽӾ��󣬼�¼��������֮��ľ��룬Ҳ����Ȩֵ
    int e, n;//�����Ͷ�����
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
                printf("�� ");
            else
                printf("%2d ", G.edges[i][j]);
        }
        printf("\n");
    }
}
void Dijkstra(MGraph g, int u)
{
    int U[MAX], mmin;//�ֱ��ʾ�Ѿ��������ĵ㡢�൱ǰ��ʼ������ĵ�ľ���
    //�Ը�������г�ʼ��
    memset(U, 0, sizeof(U));
    memset(path, -1, sizeof(path));
    //me(dist,INF);
    for (int i = 0; i < g.n; i++)
    {
        dist[i] = g.edges[u][i];
        if (g.edges[u][i] < INF)
            path[i] = u;
    }
    dist[u] = 0;//������ľ���
    for (int i = 0; i < g.n; i++) //���Դ�㵽n�������̾���
    {
        mmin = INF;
        U[u] = 1;//��ѡ�����µ���ʼ�����U������
        for (int j = 0; j < g.n; j++)
            //���if�ж϶���u�ļ����Ƿ�����ͨ������j�ĸ��̵�·����������֣���ı�ԭ��·�����䳤�ȣ�����ʲô������
        {
            if (!U[j] && dist[u] + g.edges[u][j] < dist[j])
            {
                dist[j] = dist[u] + g.edges[u][j];//����·������
                path[j] = u;//���µ�����j��·��
            }
        }
        for (int j = 0; j < g.n; j++)
            //���ѭ��ÿ�δ�ʣ�ඥ����ѡ��һ�����㣬ͨ����������·����ͨ������ʣ�ඥ���·�����ǳ�����̵�
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
        printf("%d-->%d=��", u, x);//û��·��
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
    scanf("%d%d", &G.e, &G.n);//��������Ͷ�����
    init();
    for (int i = 0; i < G.e; i++)
    {
        scanf("%d%d%d", &v1, &v2, &w);
        G.edges[v1][v2] = w;
        G.edges[v2][v1] = w;
    }
    printf_MG();//����ڽӾ���
    int u;
    scanf("%d", &u);//����Դ��
    Dijkstra(G, u);
    for (int i = 0; i < G.n; i++)//���Դ�㵽ÿ��������·���Լ�·����·
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

