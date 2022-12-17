//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#define Max 503
//#define INF 0xcffff
//
//using namespace std;
//
//typedef struct AMGraph {						//�����ڽӾ���
//	int vex;//�������
//	int arc;//�ߵ���
//	int arcs[Max][Max];
//};
//
//int dis[Max][Max], path[Max][Max];				//dis�����·�̣�path����·��
//
//void Floyd(AMGraph& G)							//���������㷨
//{
//	for (int i = 1; i <= G.vex; i++)			//��ʼ��dis��path
//		for (int j = 1; j <= G.vex; j++)
//		{
//			dis[i][j] = G.arcs[i][j];
//			if (dis[i][j] != INF && i != j) path[i][j] = i;
//			else path[i][j] = -1;
//		}
//
//	/***************Floyd�����㷨****************/
//	for (int k = 1; k <= G.vex; k++)					//����ÿ����
//		for (int i = 1; i <= G.vex; i++)				//����ÿ����
//			for (int j = 1; j <= G.vex; j++)
//			{
//				if (dis[i][k] + dis[k][j] < dis[i][j]) {
//					dis[i][j] = dis[i][k] + dis[k][j];			//�ɳڲ���
//					path[i][j] = k;								//����jǰ�����k
//				}
//			}
//}
//
//void find(int x, int y)							//���·��
//{
//	if (path[x][y] == x) {						//���x,y֮���޽ڵ㣬���������
//		cout << 1;
//		return;
//	}
//	else {										//���x,y֮����нڵ�t�������t, y
//		int t = path[x][y];
//		find(t, y);
//		cout << "->" << t;
//	}
//	return;
//}
//
//void putin(AMGraph& G)							//����ͼ
//{
//	int u, v, w;
//
//	cin >> G.vex >> G.arc;
//
//	for (int i = 1; i <= G.vex; i++)			//��ʼ���ڽӾ���
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
//void putout(AMGraph& G)							//������·�������v1���������̾����·��
//{
//	//cout << "���·����Ϊ��\n";
//	for (int i = 1; i <= G.vex; i++)
//	{
//		for (int j = 1; j < G.vex; j++)
//			cout << dis[i][j] << " ";
//		cout << dis[i][G.vex] << endl;
//	}
//	for (int i = 2; i <= G.vex; i++)
//	{
//		cout << "�ӳ�ʼ�� v1 �� v" << i << "�����·��·��Ϊ:" << dis[1][i] << endl;
//		cout << "·��Ϊ: ";
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
