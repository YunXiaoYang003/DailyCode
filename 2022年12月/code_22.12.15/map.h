#define _CRT_SECURE_NO_WARNINGS 1
//���ص��� 
#define MAXCOUNT 20
//�����ܾ���ֵ�����ص���ֱ����·ʱ�� 
#define MAXDISTANCE 99
//��ͼ�ṹ 
typedef struct map
{
	//�ص����� 
	int nodeCount;
	//�ص��ʶ 
	int id[MAXCOUNT];
	//���ص����� distance[i][j]=distance[j][i]����ʾi�ص��j�ص�ľ��� 
	int distance[MAXCOUNT][MAXCOUNT];
}Map;


//·�߽ṹ 
typedef struct road
{
	//�����ص�id 
	int path[MAXCOUNT];
	//����
	int minDistance;
	//�����ĵص���
	int count;
}Road;


//��ȡmap.txt�е���Ϣ 
void readMap(Map* map);

//��ӡ��ͼ��Ϣ 
void displayMap(Map map);


//�Ͻ�˹�����㷨��ص�a�������ص�����·�� 
Road* djstl(Map map, int id_a);


//��ӡa��b�����·�� 
void displayRoad(Road rab);

