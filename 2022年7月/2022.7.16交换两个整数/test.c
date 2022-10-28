#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void swap(int* x, int* y)
{
	int tem = *x;
	*x = *y;
	*y = tem;
}
int main(void)
{
	int a = 10, b = 20;
	printf("交换前：a=%d,b=%d\n", a, b);
	swap(&a, &b);
	printf("交换前：a=%d,b=%d", a, b);
	return 0;
}