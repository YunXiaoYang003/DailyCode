#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>��a��ֵ
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
#include <stdio.h>

//1.��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;//����
//	for (i = 1; i <= 100; i++)
//	{
//		//�ж�i��ʮλ�͸�λ�ǲ���9
//		//��λ
//		if (i % 10 == 9)
//			count++;
//		//ʮλ
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count = %d\n", count);
//
//	return 0;
//}
// 
// 
// 
//void test1(int x,int y)
//{
//	int a = 10;
//	int b = 20;
//	x = a;
//	y = b;
//}
//void test(int *px, int*py)
//{
//	int a = 10;
//	int b = 20;
//	*px = a;
//	*py = b;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	//test(&x, &y);
//	test1(x, y);
//	printf("%d %d\n", x, y);
//	return 0;
//}
