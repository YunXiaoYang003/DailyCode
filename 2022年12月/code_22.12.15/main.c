#define _CRT_SECURE_NO_WARNINGS 1
#include"map.h"
int main()
{
	//��ͼ���� 
	Map map;
	//��ȡ��ͼ 
	readMap(&map);
	//��ӡ��ͼ��Ϣ 
	displayMap(map);

	int id_a=0, id_b=0;
	printf("id_a:");
	scanf("%d", &id_a);
	printf("id_b:");
	scanf("%d", &id_b);

	printf("�������·���У����Ժ�...\n");
	Road* r = djstl(map, id_a);
	printf("�������·����ϣ�\n");
	displayRoad(r[id_b]);
	return 0;
}
