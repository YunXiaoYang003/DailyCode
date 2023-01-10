#define _CRT_SECURE_NO_WARNINGS 1
///最短路径
//有向图的网络存储结构，
//校园导航
//(1)计算出给定起点到终点之间的最短距离
//(2)输出该路线
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
    int n;          //顶点个数
    VexType vexs[MAXVEX];       //顶点信息
    AdjType arcs[MAXVEX][MAXVEX];   //边信息
}GraphMatrix;
typedef struct {
    int len;            //最短路径长度
    int pre;            //前一顶点
}ShortPath;
int Locate(GraphMatrix* g, VexType u)  //寻找u在网络中的序号
{
    for (int i = 0; i < g->n; ++i)
    {
        if (strcmp(u, g->vexs[i]) == 0)     //如果
            return i;
    }
    return ERROR;
}
//学校建筑物的信息存进去
void Init_route(GraphMatrix* h)
{
    VexType va, vb;   //用于保存节点的临时变量
    int weight;  //用于保存权重的临时变量
    GraphMatrix* p = h;
    int n;
    printf("请输入顶点的个数：");
    scanf("%d", &n);
    p->n = n;
    getchar();      //吸收掉回车键

    for (int i = 0; i < n; i++)
    {
        printf("请输入第%d顶点的名称:", i + 1);
        scanf("%s", p->vexs[i]);
        printf("\n");
    }
    for (int i = 0; i < n; i++)    //将所有的联系路径设为无穷
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                p->arcs[i][j] = 0;
            else
                p->arcs[i][j] = MAX_INT;
        }
    int m;      //请输入边的条数；
    printf("请输入边的条数：");
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
            printf("输入错误，请您仔细检查\n");
    }
    printf("初始化完毕！\n");
}
//迪杰克拉斯算法
void Dijkstra(GraphMatrix* pgraph, ShortPath dist[], int start)
{
    int i, j, min_;
    AdjType minw;
    dist[start].len = 0;
    dist[start].pre = 0;
    pgraph->arcs[start][start] = 1;
    for (int i = 0; i < pgraph->n; ++i)
    {
        dist[i].len = pgraph->arcs[start][i]; //初始距离到顶点距离赋值
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
    printf("\n请输入您要查询的起点和终点:\n");
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
                printf("%s<->%s无路可走!\n", graph.vexs[m], graph.vexs[n]);
            else
                printf("您输入的的顶点重合");
        else {
            tmp = cnt;
            printf("%s->", graph.vexs[temppath[tmp]]);
            for (; tmp > 0; --tmp)
            {
                printf("%s(%d)->", graph.vexs[temppath[tmp - 1]], graph.arcs[temppath[tmp]][temppath[tmp - 1]]);
                totallen += graph.arcs[temppath[tmp]][temppath[tmp - 1]];
            }
            printf("共：%d\n", totallen);
        }
    }
    else
        printf("%s->%s中不存在的建筑，请您仔细检查！!", va, vb);
    return 0;
}

