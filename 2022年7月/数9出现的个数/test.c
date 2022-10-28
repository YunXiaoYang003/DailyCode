#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int i = 0,j=0;
	int num = 0;
	for (i = 1; i < 101; i++)
	{
		if (i%10 == 9)
			num++;
		if (i /10 == 9)
			num++;
	}
	printf("num=%d", num);
	return 0;
}