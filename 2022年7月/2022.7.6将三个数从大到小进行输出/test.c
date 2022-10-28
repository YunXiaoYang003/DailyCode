#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int a = 0, b = 0, c = 0;
	int temp = 0;
	scanf("%d%d%d",&a, &b, &c);
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b<c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("%d %d %d",a, b, c);
	return 0;
}