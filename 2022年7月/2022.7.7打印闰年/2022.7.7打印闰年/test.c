#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	for (int i = 1000; i < 2001; i++)
	{
		if((i % 4 == 00 && i % 100 != 0)||(i%400==0))
			printf("%d  ", i);
	}
	return 0;
}
