#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Mult1()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if(i<j)
			printf("%dx%d=%-2d ", i, j, i * j);
			if (j == 9)
				printf("\n");
		}
	}
}
void Mult2()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <=i; j++)
		{
			printf("%dx%d=%-2d ", j, i, i * j);
		}
		printf("\n");
	}
}
int main(void)
{
	Mult1();
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	Mult2();
	return 0;
}