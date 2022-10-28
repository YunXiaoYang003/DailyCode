#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Print_prim()
{
	for (int i =100; i < 201; i++)
	{
		for (int j = 2; j < i / 2; j++)
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
}
int main(void)
{
	Print_prim();
	return 0;
}