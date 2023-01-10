#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int get_max(int x, int y)
{
	return  (x > y ? x : y);	
}
void swap1(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}
void swap2(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}
int main(void)
{
	int a = 3;
	int b = 5;
	printf("交换前：a=%d,b=%d\n", a, b);
	//swap1(a, b);
	swap2(&a, &b);
	printf("交换后：a=%d,b=%d", a, b);
	return 0;
}

/*char arr1[20] = { 0 };//库函数——strcpy
char arr2[] = "abc";
strcpy(arr1, arr2);
printf("%s", arr1);*/

//char arr1[] = "hello bit!";//库函数——memset
//memset(arr1, 'x', 5);
//printf("%s", arr1);

/*int a = 3;//求两个数的最大值——get_max——自定义函数
int b = 5;
int max = 0;
max = get_max(a, b);
printf("%d", max);*/