#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>求a的值
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

//1.编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;//计数
//	for (i = 1; i <= 100; i++)
//	{
//		//判断i的十位和个位是不是9
//		//个位
//		if (i % 10 == 9)
//			count++;
//		//十位
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
