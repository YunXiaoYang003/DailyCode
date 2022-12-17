#define _CRT_SECURE_NO_WARNINGS 1
#include"map.h"
int main()
{
	//地图变量 
	Map map;
	//读取地图 
	readMap(&map);
	//打印地图信息 
	displayMap(map);

	int id_a=0, id_b=0;
	printf("id_a:");
	scanf("%d", &id_a);
	printf("id_b:");
	scanf("%d", &id_b);

	printf("搜索最短路径中，请稍后...\n");
	Road* r = djstl(map, id_a);
	printf("搜索最短路径完毕！\n");
	displayRoad(r[id_b]);
	return 0;
}
