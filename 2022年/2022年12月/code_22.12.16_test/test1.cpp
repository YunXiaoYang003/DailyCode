//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#define Max 503
//#define INF 0xcffff
//
//using namespace std;
//
//typedef struct AMGraph {						//定义邻接矩阵
//	int vex;//顶点个数
//	int arc;//边的数
//	int arcs[Max][Max];
//};
//
//int dis[Max][Max], path[Max][Max];				//dis存最短路程，path保存路径
//
//void Floyd(AMGraph& G)							//弗洛伊德算法
//{
//	for (int i = 1; i <= G.vex; i++)			//初始化dis和path
//		for (int j = 1; j <= G.vex; j++)
//		{
//			dis[i][j] = G.arcs[i][j];
//			if (dis[i][j] != INF && i != j) path[i][j] = i;
//			else path[i][j] = -1;
//		}
//
//	/***************Floyd核心算法****************/
//	for (int k = 1; k <= G.vex; k++)					//遍历每个点
//		for (int i = 1; i <= G.vex; i++)				//遍历每条边
//			for (int j = 1; j <= G.vex; j++)
//			{
//				if (dis[i][k] + dis[k][j] < dis[i][j]) {
//					dis[i][j] = dis[i][k] + dis[k][j];			//松弛操作
//					path[i][j] = k;								//保存j前驱结点k
//				}
//			}
//}
//
//void find(int x, int y)							//输出路径
//{
//	if (path[x][y] == x) {						//如果x,y之间无节点，则结束查找
//		cout << 1;
//		return;
//	}
//	else {										//如果x,y之间具有节点t，则查找t, y
//		int t = path[x][y];
//		find(t, y);
//		cout << "->" << t;
//	}
//	return;
//}
//
//void putin(AMGraph& G)							//输入图
//{
//	int u, v, w;
//
//	cin >> G.vex >> G.arc;
//
//	for (int i = 1; i <= G.vex; i++)			//初始化邻接矩阵
//		for (int j = 1; j <= G.vex; j++)
//		{
//			if (i == j) G.arcs[i][j] = 0;
//			else G.arcs[i][j] = INF;
//		}
//
//	for (int i = 0; i < G.arc; i++)
//	{
//		cin >> u >> v >> w;
//		G.arcs[u][v] = w;
//	}
//}
//
//void putout(AMGraph& G)							//输出最短路矩阵、起点v1到各点的最短距离和路径
//{
//	//cout << "最短路矩阵为：\n";
//	for (int i = 1; i <= G.vex; i++)
//	{
//		for (int j = 1; j < G.vex; j++)
//			cout << dis[i][j] << " ";
//		cout << dis[i][G.vex] << endl;
//	}
//	for (int i = 2; i <= G.vex; i++)
//	{
//		cout << "从初始点 v1 到 v" << i << "的最短路径路程为:" << dis[1][i] << endl;
//		cout << "路径为: ";
//		find(1, i);
//		cout << "->" << i << endl;
//	}
//}
//
//int main()
//{
//	AMGraph G;
//	putin(G);
//	Floyd(G);
//	putout(G);
//	return 0;
//}
