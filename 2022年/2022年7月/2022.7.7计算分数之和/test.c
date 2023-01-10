#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	float i = 0.0f,j=0.0f;
	float sum = 0.0f,num=0.0f;
	for (i = 1; i < 101; i++)
	{
		num = 1 / i;
		j = i;
			while (j+1 > 0)
			{
				num *= -1;
				j--;
			}
			sum += num;
	}
	printf("sum=%.5f", sum);
	return 0;
}