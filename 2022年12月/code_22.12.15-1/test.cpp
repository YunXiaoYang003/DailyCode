#define _CRT_SECURE_NO_WARNINGS 1
///���·��
//����ͼ������洢�ṹ��
//У԰����
//(1)�����������㵽�յ�֮�����̾���
//(2)�����·��
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<limits>
#include<stack>
using namespace std;
const int ERROR = -1;
const int MAXVEX = 30;
const int MAXNAME = 20;
const int MAX_INT = numeric_limits<int>::max();
typedef char VexType[MAXNAME];
typedef int AdjType;
typedef struct {
    int n;          //�������
    VexType vexs[MAXVEX];       //������Ϣ
    AdjType arcs[MAXVEX][MAXVEX];   //����Ϣ
}GraphMatrix;
typedef struct {
    int len;            //���·������
    int pre;            //ǰһ����
}ShortPath;
int Locate(GraphMatrix* g, VexType u)  //Ѱ��u�������е����
{
    for (int i = 0; i < g->n; ++i)
    {
        if (strcmp(u, g->vexs[i]) == 0)     //���
            return i;
    }
    return ERROR;
}
//ѧУ���������Ϣ���ȥ
void Init_route(GraphMatrix* h)
{
    VexType va, vb;   //���ڱ���ڵ����ʱ����
    int weight;  //���ڱ���Ȩ�ص���ʱ����
    GraphMatrix* p = h;
    int n;
    printf("�����붥��ĸ�����");
    scanf("%d", &n);
    p->n = n;
    getchar();      //���յ��س���

    for (int i = 0; i < n; i++)
    {
        printf("�������%d���������:", i + 1);
        scanf("%s", p->vexs[i]);
        printf("\n");
    }
    for (int i = 0; i < n; i++)    //�����е���ϵ·����Ϊ����
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                p->arcs[i][j] = 0;
            else
                p->arcs[i][j] = MAX_INT;
        }
    int m;      //������ߵ�������
    printf("������ߵ�������");
    scanf("%d", &m);
    for (int k = 0; k < m; k++)
    {
        scanf("%s%s%d", va, vb, &weight);
        int i, j;
        i = Locate(p, va);
        j = Locate(p, vb);
        if (i != ERROR && j != ERROR)
            p->arcs[i][j] = weight;
        else
            printf("�������������ϸ���\n");
    }
    printf("��ʼ����ϣ�\n");
}
//�Ͻܿ���˹�㷨
void Dijkstra(GraphMatrix* pgraph, ShortPath dist[], int start)
{
    int i, j, min_;
    AdjType minw;
    dist[start].len = 0;
    dist[start].pre = 0;
    pgraph->arcs[start][start] = 1;
    for (int i = 0; i < pgraph->n; ++i)
    {
        dist[i].len = pgraph->arcs[start][i]; //��ʼ���뵽������븳ֵ
        if (dist[i].len != MAX_INT)
            dist[i].pre = start;
        else
            dist[i].pre = -1;
    }
    dist[start].pre = -1;
    for (i = 0; i < pgraph->n; i++)
    {
        minw = MAX_INT;
        min_ = start;
        for (j = 0; j < pgraph->n; j++)
            if ((pgraph->arcs[j][j] == 0) && (dist[j].len < minw))
            {
                minw = dist[j].len;
                min_ = j;
            }
        if (min_ == 0)
            break;
        pgraph->arcs[min_][min_] = 1;
        for (j = 0; j < pgraph->n; j++)
        {
            if (pgraph->arcs[j][j] == 1)
                continue;
            if (dist[j].len > dist[min_].len + pgraph->arcs[min_][j] && dist[min_].len + pgraph->arcs[min_][j] > 0)
            {
                dist[j].len = dist[min_].len + pgraph->arcs[min_][j];
                dist[j].pre = min_;
            }
        }
    }
}

int main()
{
    GraphMatrix graph;
    ShortPath path[MAXVEX];
    int tmp, cnt = 0, pre = -1;
    int temppath[MAXVEX];
    int m, n;
    VexType va, vb;
    long totallen = 0;
    long curlen = 0;
    Init_route(&graph);
    printf("\n��������Ҫ��ѯ�������յ�:\n");
    scanf("%s%s", va, vb);
    m = Locate(&graph, va);
    n = Locate(&graph, vb);
    if (m != ERROR && n != ERROR)
    {
        Dijkstra(&graph, path, m);
        for (tmp = 0; tmp < MAXVEX; tmp++)
            temppath[tmp] = -1;
        pre = n;
        while (path[pre].pre != -1)
        {
            temppath[cnt] = pre;
            pre = path[pre].pre;
            cnt++;
        }
        temppath[cnt] = m;
        if (cnt <= 0)
            if (m != n)
                printf("%s<->%s��·����!\n", graph.vexs[m], graph.vexs[n]);
            else
                printf("������ĵĶ����غ�");
        else {
            tmp = cnt;
            printf("%s->", graph.vexs[temppath[tmp]]);
            for (; tmp > 0; --tmp)
            {
                printf("%s(%d)->", graph.vexs[temppath[tmp - 1]], graph.arcs[temppath[tmp]][temppath[tmp - 1]]);
                totallen += graph.arcs[temppath[tmp]][temppath[tmp - 1]];
            }
            printf("����%d\n", totallen);
        }
    }
    else
        printf("%s->%s�в����ڵĽ�����������ϸ��飡!", va, vb);
    return 0;
}

