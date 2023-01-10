#define _CRT_SECURE_NO_WARNINGS 1
//最大地点数 
#define MAXCOUNT 20
//不可能距离值（两地点无直接线路时） 
#define MAXDISTANCE 99
//地图结构 
typedef struct map
{
	//地点数量 
	int nodeCount;
	//地点标识 
	int id[MAXCOUNT];
	//各地点间距离 distance[i][j]=distance[j][i]，表示i地点和j地点的距离 
	int distance[MAXCOUNT][MAXCOUNT];
}Map;


//路线结构 
typedef struct road
{
	//经过地点id 
	int path[MAXCOUNT];
	//距离
	int minDistance;
	//经过的地点数
	int count;
}Road;


//读取map.txt中的信息 
void readMap(Map* map);

//打印地图信息 
void displayMap(Map map);


//迪杰斯特拉算法求地点a到其他地点的最短路径 
Road* djstl(Map map, int id_a);


//打印a到b的最短路径 
void displayRoad(Road rab);

