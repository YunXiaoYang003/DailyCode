#include"map.h"
#include <string.h>
#include <errno.h>
#include <stdio.h>
//读取map.txt中的信息 
void readMap(Map* map)
{
	//以读形式打开文件 
	FILE* fp = fopen("map.txt", "r");
	//读取地点数量 
	fscanf(fp, "%d", &map->nodeCount);
	int n;
	//读取路线数量 
	fscanf(fp, "%d", &n);
	int i, j;
	//初始化地点id
	for (i = 1; i <= map->nodeCount; i++)
	{
		map->id[i] = i;
	}
	//初始化每两地点均无路线
	for (i = 1; i < MAXCOUNT; i++)
	{
		for (j = 1; j < MAXCOUNT; j++)
		{
			map->distance[i][j] = MAXDISTANCE;
		}
	}
	//读入线路
	int k, d;
	for (k = 1; k <= n; k++)
	{
		fscanf(fp, "%d%d%d", &i, &j, &d);
		map->distance[i][j] = d;
		map->distance[j][i] = d;
	}
	//关闭文件
	fclose(fp);
}




//迪杰斯特拉算法求地点a到其他地点的最短路径 
Road* djstl(Map map, int id_a)
{
	//所有路线 
	Road r[MAXCOUNT];
	//标记数组（0为未标记，1为已标记） 
	int flag[MAXCOUNT] = { 0 };

	int i;
	//初始化所有路线 
	for (i = 1; i <= map.nodeCount; i++)
	{
		/*a地点到其他各个地点的距离*/
		/*起点是a，终点是i*/
		r[i].count = 2;
		r[i].path[0] = id_a;
		r[i].path[1] = i;
		r[i].minDistance = map.distance[id_a][i];
	}

	//标记a
	flag[id_a] = 1;

	//还有未标记地点则循环执行 
	while (1)
	{
		//寻找a到未标记的地点的最短路线的下标 
		int index = -1;
		for (i = 1; i <= map.nodeCount; i++)
		{
			//未标记 
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
		//不存在未标记下标了 
		if (index == -1)
		{
			return r;
		}
		//标记index
		flag[index] = 1;
		//比较并修改其他路线此时的最短路径 
		for (i = 1; i <= map.nodeCount; i++)
		{
			//未找到最短路径的地点 
			if (flag[i] == 0)
			{
				//a->...->i短还是a->...->index->i短，后者短，则说明a到i有更好的选择 
				if (r[i].minDistance > r[index].minDistance + map.distance[index][i])
				{
					/*将r[index]的值赋予r[i]，并修改r[i]的最短路径*/
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


//打印a到b的最短路径 
void displayRoad(Road rab)
{
	printf("距离:%d\n", rab.minDistance);
	int i;
	printf("路线:");
	for (i = 0; i < rab.count - 1; i++)
	{
		printf("%d-->", rab.path[i]);
	}
	printf("%d\n\n", rab.path[i]);
}


//打印地图信息 
void displayMap(Map map)
{
	int i, j;
	printf("地点个数:%d\n", map.nodeCount);
	printf("各地点间距离（...表示无路线）:\n");
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