//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//#define max 10000;
//
//int arcs[100][100]; //保存邻接矩阵
//int d[100]; //记录源点到各节点的最短路径
//int fina[100]; //记录节点是否已经判断过，1代表已经运算过(在集合s中)
//int n; //邻接矩阵的边数
//int v0, v1; // 表示起始点和终点
//int p[100]; //记录路径
//
//void dijkstra()
//{
//	int v, k;
//	int min;
//	for (v = 0; v < n; v++) //初始化
//	{
//		fina[v] = 0;
//		d[v] = arcs[v0][v];
//	}
//	d[v0] = 0;
//	fina[v0] = 1;
//	//主循环
//	for (int i = 1; i < n; i++)
//	{
//		min = max;
//		//选出权值最小的点
//		for (k = 0; k < n; k++)
//		{
//			if (fina[k] == 0) //k点在v-s中，尚未进行处理
//			{
//				if (d[k] < min)
//				{
//					v = k;
//					min = d[k];
//				}
//			}
//		}
//		fina[v] = 1; //表示已经处理过，加入集合s
//		for (k = 0; k < n; k++)
//		{
//			if (fina[k] == 0 && (min + arcs[v][k] < d[k]))
//			{
//				p[k] = v;
//				d[k] = min + arcs[v][k];
//			}
//		}
//	}
//}
//
//void print(int sec, int n)       //sec为出发节点，n表示图中节点总数  
//{
//	int i, j;
//	int m, p2[100] = { 0 };
//	int t = 0, k;
//	j = v1;
//	while (p[j] != -1)
//	{
//		p2[t++] = p[j];
//		j = p[j];
//	}
//	printf("%d->", v0);
//	for (k = 0; k < t; k++)
//	{
//		printf("%d->", p2[k]);
//	}
//	printf("%d\n", v1);
//}
//
//int main()
//{
//	scanf("%d", &n);
//	//输入邻接矩阵
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arcs[i][j]);
//		}
//	}
//	scanf("%d", &v0);
//	for (int i = 0; i < n; i++)
//	{
//		v1 = i;
//		if (v0 == v1)
//			continue;
//		for (int i = 0; i < 100; i++) //路径初始化为-1
//		{
//			p[i] = -1;
//		}
//		dijkstra();
//		print(v0, n);
//	}	
//	return 0;
//}
//
