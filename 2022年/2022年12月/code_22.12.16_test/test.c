//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
//#define max 10000;
//
//int arcs[100][100]; //�����ڽӾ���
//int d[100]; //��¼Դ�㵽���ڵ�����·��
//int fina[100]; //��¼�ڵ��Ƿ��Ѿ��жϹ���1�����Ѿ������(�ڼ���s��)
//int n; //�ڽӾ���ı���
//int v0, v1; // ��ʾ��ʼ����յ�
//int p[100]; //��¼·��
//
//void dijkstra()
//{
//	int v, k;
//	int min;
//	for (v = 0; v < n; v++) //��ʼ��
//	{
//		fina[v] = 0;
//		d[v] = arcs[v0][v];
//	}
//	d[v0] = 0;
//	fina[v0] = 1;
//	//��ѭ��
//	for (int i = 1; i < n; i++)
//	{
//		min = max;
//		//ѡ��Ȩֵ��С�ĵ�
//		for (k = 0; k < n; k++)
//		{
//			if (fina[k] == 0) //k����v-s�У���δ���д���
//			{
//				if (d[k] < min)
//				{
//					v = k;
//					min = d[k];
//				}
//			}
//		}
//		fina[v] = 1; //��ʾ�Ѿ�����������뼯��s
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
//void print(int sec, int n)       //secΪ�����ڵ㣬n��ʾͼ�нڵ�����  
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
//	//�����ڽӾ���
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
//		for (int i = 0; i < 100; i++) //·����ʼ��Ϊ-1
//		{
//			p[i] = -1;
//		}
//		dijkstra();
//		print(v0, n);
//	}	
//	return 0;
//}
//
