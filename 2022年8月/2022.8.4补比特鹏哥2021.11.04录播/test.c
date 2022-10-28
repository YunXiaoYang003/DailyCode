#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	int i = 0;
//	while(i<10)
//	{
//		i++;
//	}
//	return 0;
//}
//
//#include <stdio.h>
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
//

#include <stdio.h>

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
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

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}
//

//求10 个整数中最大值
//
//int main()
//{
//	int arr[10] = {0};
//	//输入值
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//0~9
//	int max = arr[0];//假设第一个元素就是最大值
//
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	
//	printf("%d\n", max);
//
//	return 0;
//}


//在屏幕上输出9*9乘法口诀表

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//...
//...


//int test()
//{
//	int a = 10;
//	int b = 20;
//	return a, b;
//}
//
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);
//	return 0;
//}


//void test(int arr[])
//{
//	int a = 10;
//	int b = 20;
//	arr[0] = a;
//	arr[1] = b;
//}


//void test(int *px, int*py)
//{
//	int a = 10;
//	int b = 20;
//	*px = a;
//	*py = b;
//}
//
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	test(&x, &y);
//	printf("%d %d\n", x, y);
//
//	return 0;
//}
//
//void test(int arr[])
//{
//
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//
//
//	int arr[1000] = { 0 };
//	test(arr);
//	return 0;
//}


//int a = 0;
//int b = 0;
//
//void test()
//{
//	int x = 10;
//	int y = 20;
//	a = x;
//	b = y;
//}
//
//int main()
//{
//	test();
//	printf("%d %d\n", a, b);//10 20
//
//	return 0;
//}
//
//
//
//void test(int b)
//{
//	{
//		int x = 0;
//	}
//	//?
//	int c = 0;
//	//?
//}
//
//
//int main()
//{
//	int a = 10;
//
//	return 0;
//}
//
//#include <stdio.h>

//
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	print_table(line);
//	return 0;
//}

//
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//int c = 30;
//	//int n = 10;
//	//int arr2[n];
//	//int arr[5];
//	//char ch[10];
//
//	//创建的同时给一些初始值叫初始化
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int arr[10] = { 1,2,3 };//不完全初始化，剩余的元素默认初始化为0
//	//int arr[10] = { 0 };
//
//	//int arr[] = { 1,2,3 };
//	//int arr[] = { 0 };//只有一个元素
//	//int i = 0;
//	////错误的示范
//	//for (i = 0; i < 10; i++)
//	//{
//	//	scanf("%d", &arr[i]);
//	//}
//
//
//	//char arr1[] = { 'a', 'b', 'c' };
//	////arr1有3个元素，数组的大小是3个字节
//	////printf("%d\n", sizeof(arr1));
//	//printf("%d\n", strlen(arr1));//随机值
//
//	//char arr2[] = "abc";//a b c \0
//	////arr2有4个元素，数组的大小是4个字节
//	////printf("%d\n", sizeof(arr2));
//	//printf("%d\n", strlen(arr2));//3
//
//	//int arr[10] = {0};
//
//	//int a;
//	//printf("%d\n", a);
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//0~9
//	int i = 0;
//	//计算数组的元素个数
//	int sz = sizeof(arr)/sizeof(arr[0]);//40/4 = 10
//
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//printf("%d\n", arr[5]);//[]下标访问操作符
//	//a+b
//
//	return 0;
//}

//一维数组在内存中的存储

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	//打印数组每个元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("&arr[%d] = %p\n", i, &arr[i]);
//		//printf("%p\n", p + i);//p+i 是数组中arr[i]的地址
//		//printf("%p ----- %p\n", p + i, &arr[i]);
//		printf("%d ", *(p + i));
//	}
//
//
//	return 0;
//}


int main()
{
	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
	}

	//int arr[3][4] = { 1,2,3,4,5,6,7};
	//int arr[3][4] = { {1,2},{3,4},{5,6} };
	//printf("%d\n", arr[2][3]);
	//int i = 0;
	//for (i = 0; i < 3; i++)//行
	//{
	//	int j = 0;
	//	for (j = 0; j < 4; j++)//列
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	printf("\n");
	//}



	return 0;
}