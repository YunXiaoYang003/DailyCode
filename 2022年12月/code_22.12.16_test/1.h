#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#define Max 503
#define INF 0xcffff

using namespace std;

typedef struct AMGraph {						//�����ڽӾ���
	int vex;//�������
	int arc;//�ߵ���
	int arcs[Max][Max];
};



void Floyd(AMGraph& G);						//���������㷨


void find(int x, int y);						//���·��


void putin(AMGraph& G);						//����ͼ


void putout(AMGraph& G);						//������·�������v1���������̾����·��