//#include<stdio.h>
//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//int main()
//{
//    int ret = Fun(2);
//    printf("%d\n", ret);
//    return 0;
//}
//递归方式实现打印一个整数的每一位
//#include<stdio.h>
//int main()
//{
//	int n = 100;
//	
//}

//void resverse(char arr[])函数，非递归方式
//{
//	int left = 0;
//	int right = strlen(arr) - 1;//strlen是遇到\0就停止，不包含\0
//	while (left < right)
//	{
//		char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void resverse(char* str)
//{
//	char temp = *str;//1
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//2
//	*(str + len - 1) = '\0';//3
//	if (my_strlen(str + 1) >= 2)
//	{
//		resverse(str + 1);//4
//	}
//	*(str + len - 1) = temp;
//
//}
//int main(void)
//{
//	char arr[] = "abcdef";//a,b,c,d,e,f,\0共六个字符
//	resverse(arr);
//	printf("%s\n", arr);
//		return 0;
//}
//void resverse(char arr[])//函数，非递归方式
//{
//	int left = 0;
//	int right = strlen(arr) - 1;//strlen是遇到\0就停止，不包含\0
//	while (left < right)
//	{
//		char temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//#include<stdio.h>
//#include<string.h>
//void resverse(char* str)
//{
//	char temp = *str;//1
//	int len =strlen(str);
//	*str = *(str + len - 1);//2
//	*(str + len - 1) = '\0';//3
//	if (strlen(str + 1) >= 2)
//	{
//		resverse(str + 1);//4
//	}
//	*(str + len - 1) = temp;
//
//}
//
//int main(void)
//{
//	char arr[] = "abcdef";//a,b,c,d,e,f,\0共六个字符
//	resverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//		return n;
//}
//int main(void)
//{
//	unsigned int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d", sum);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//double Pow(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else
//		1.0 / Pow(n, k);
//}
//int main(void)
//{
//	int n = 0, k = 0;
//	scanf("%d%d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>//递归方式实现打印一个整数的每一位
//void Print(int n)
//{
//    if (n > 9)
//        Print(n / 10);
//    printf("%d ", n % 10);
//}
//int main(void)
//{
//    int n = 0;
//    scanf("%d", &n);
//    Print(n);
//    return 0;
//}
//#include<stdio.h>
//int Fac1(int N)//递归
//{
//    if (N <= 1)
//        return 1;
//
//    return Fac1(N - 1) * N;
//}
//int Fac2(int N)//非递归
//{
//    int ret = 1;
//    for (int i = 2; i <= N; ++i)
//    {
//        ret *= i;
//    }
//
//    return ret;
//}
//int main(void)
//{
//    printf("%d\n", Fac1(2));
//    printf("%d", Fac2(3));
//    return 0;
//}
//#include<stdio.h>
//int my_strlen1(char* str)
//{
//    int count = 0;
//    while ('\0' != *str)
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//int my_strlen2(char* str)
//{
//    if ('\0' == *str)
//        return 0;
//    else
//        return 1 + my_strlen2(1 + str);
//}
//int main(void)
//{
//    printf("%d\n", my_strlen1("abc"));
//    printf("%d\n", my_strlen2("abcd"));
//    return 0;
//}
//#include<stdio.h>
//int Fac(int N)
//{
//    if (N < 3)
//        return 1;
//
//    return Fac(N - 1) + Fac(N - 2);
//}
//int main(void)
//{
//    printf("%d\n",Fac(5));
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };//逗号表达式
//    printf("%d\n", sizeof(arr));//等价于int [10]，是它的类型
//    return 0;
//}
//#include <stdio.h>
//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}
//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#include<stdio.h>
//void Swap(int arr1[], int arr2[], int length)
//{
//	for (int i = 0; i < length / 2; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//}
//int main(void)
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 9,8,7,6,5,4 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Swap(arr1, arr2, sz);
//	for (int i = 0; i < sz ; i++)
//		printf("%d ",arr1[i]); 
//	printf("\n");
//	for (int i = 0; i < sz ; i++)
//		printf("%d ",arr2[i]);
//	return 0;
//}
//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//#include<stdio.h>
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	reverse(arr, sz);
//	Print(arr, sz);
//	Init(arr, sz);
//	Print(arr, sz);
//	return 0;
//}
//冒泡排序
#include<stdio.h>
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 3,1,5,2,4,9,0,7,6,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}