#define _CRT_SECURE_NO_WARNINGS 1//打印100至200的素数
#include<stdio.h>
int main(void)
{
	int i = 0, j = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i/2; j++)
		{
			if (i % j == 0)
				break;
			else
			{
				printf("%d ", i);
				break;
			}
		}
	}
	return 0;
}