#include"map.h"
#include <string.h>
#include <errno.h>
#include <stdio.h>
//��ȡmap.txt�е���Ϣ 
void readMap(Map* map)
{
	//�Զ���ʽ���ļ� 
	FILE* fp = fopen("map.txt", "r");
	//��ȡ�ص����� 
	fscanf(fp, "%d", &map->nodeCount);
	int n;
	//��ȡ·������ 
	fscanf(fp, "%d", &n);
	int i, j;
	//��ʼ���ص�id
	for (i = 1; i <= map->nodeCount; i++)
	{
		map->id[i] = i;
	}
	//��ʼ��ÿ���ص����·��
	for (i = 1; i < MAXCOUNT; i++)
	{
		for (j = 1; j < MAXCOUNT; j++)
		{
			map->distance[i][j] = MAXDISTANCE;
		}
	}
	//������·
	int k, d;
	for (k = 1; k <= n; k++)
	{
		fscanf(fp, "%d%d%d", &i, &j, &d);
		map->distance[i][j] = d;
		map->distance[j][i] = d;
	}
	//�ر��ļ�
	fclose(fp);
}




//�Ͻ�˹�����㷨��ص�a�������ص�����·�� 
Road* djstl(Map map, int id_a)
{
	//����·�� 
	Road r[MAXCOUNT];
	//������飨0Ϊδ��ǣ�1Ϊ�ѱ�ǣ� 
	int flag[MAXCOUNT] = { 0 };

	int i;
	//��ʼ������·�� 
	for (i = 1; i <= map.nodeCount; i++)
	{
		/*a�ص㵽���������ص�ľ���*/
		/*�����a���յ���i*/
		r[i].count = 2;
		r[i].path[0] = id_a;
		r[i].path[1] = i;
		r[i].minDistance = map.distance[id_a][i];
	}

	//���a
	flag[id_a] = 1;

	//����δ��ǵص���ѭ��ִ�� 
	while (1)
	{
		//Ѱ��a��δ��ǵĵص�����·�ߵ��±� 
		int index = -1;
		for (i = 1; i <= map.nodeCount; i++)
		{
			//δ��� 
			if (flag[i] == 0)
			{
				if (index == -1)
				{
					index = i;
				}
				else if (r[i].minDistance < r[index].minDistance)
				{
					index = i;
				}
			}
		}
		//������δ����±��� 
		if (index == -1)
		{
			return r;
		}
		//���index
		flag[index] = 1;
		//�Ƚϲ��޸�����·�ߴ�ʱ�����·�� 
		for (i = 1; i <= map.nodeCount; i++)
		{
			//δ�ҵ����·���ĵص� 
			if (flag[i] == 0)
			{
				//a->...->i�̻���a->...->index->i�̣����߶̣���˵��a��i�и��õ�ѡ�� 
				if (r[i].minDistance > r[index].minDistance + map.distance[index][i])
				{
					/*��r[index]��ֵ����r[i]�����޸�r[i]�����·��*/
					r[i].count = r[index].count + 1;
					int j;
					for (j = 0; j < r[i].count - 1; j++)
					{
						r[i].path[j] = r[index].path[j];
					}
					r[i].path[j] = i;
					r[i].minDistance = r[index].minDistance + map.distance[index][i];
				}
			}
		}
	}
}


//��ӡa��b�����·�� 
void displayRoad(Road rab)
{
	printf("����:%d\n", rab.minDistance);
	int i;
	printf("·��:");
	for (i = 0; i < rab.count - 1; i++)
	{
		printf("%d-->", rab.path[i]);
	}
	printf("%d\n\n", rab.path[i]);
}


//��ӡ��ͼ��Ϣ 
void displayMap(Map map)
{
	int i, j;
	printf("�ص����:%d\n", map.nodeCount);
	printf("���ص����루...��ʾ��·�ߣ�:\n");
	printf("    ");
	for (i = 1; i <= map.nodeCount; i++)
	{
		printf("%-3d ", i);
	}
	printf("\n");
	for (i = 1; i <= map.nodeCount; i++)
	{
		printf("%-3d ", i);
		for (j = i; j <= map.nodeCount; j++)
		{
			if (map.distance[i][j] == MAXDISTANCE)
			{
				printf("... ");
			}
			else
			{
				printf("%-3d ", map.distance[i][j]);
			}
		}
		printf("\n");
	}
	printf("\n");
}