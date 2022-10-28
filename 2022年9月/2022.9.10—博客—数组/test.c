#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main(void)
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("arr[%d]=%p\n",i, &arr [i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	int arr[3][3] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main(void)
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	for (int i = 0; i <= 10; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}
////冒泡排序的错误设计
//#include<stdio.h>
//void bubble_sort(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0, j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main(void)
//{
//	int arr[10] = { 3,4,8,9,6,7,10,1,2,5 };
//	bubble_sort(arr);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
////冒泡排序的正确设计
//#include<stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main(void)
//{
//	int arr[10] = { 3,4,8,9,6,7,10,1,2,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
#include<stdio.h>
int main(void)
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
	printf("%p\n", &arr);
	printf("%p\n", &arr + 1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", sizeof(arr));
	return 0;
}