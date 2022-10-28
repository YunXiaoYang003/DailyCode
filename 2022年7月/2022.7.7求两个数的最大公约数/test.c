#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int a = 0, b = 0, c = 0;
	scanf("%d%d", &a, &b);
	if (a < b)
	{
		c = a;
		a = b;
		b = c;
	}
	//while (b != 0)//Õ·×ªÏà³ý·¨
	//{
	//	c = b;
	//	b = a % b;
	//	a = c;
	//}
	//printf("gcd(a,b)=%d", a);
	int i = 0;
	for (i = b; i > 0; i--)
	{
		if ((a % i == 0) && (b % i == 0))
			break;
	}
	printf("gcd(%d,%d)=%d", a, b, i);
	return 0;
}