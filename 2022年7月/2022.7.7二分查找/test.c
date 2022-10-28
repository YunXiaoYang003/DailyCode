#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(a) / sizeof(a[0]);
	int left = 0;
	int right = sz - 1;
	int k = 0;
	int mid = 0;
	scanf("%d", &k);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] > k)
			right = mid - 1;
		else if (a[mid] < k)
			left = mid + 1;
		else
		{
			printf("找到了，下标是：%d", mid);
			break;
		}
	}
	if (left > right)
		printf("找不到!");
	return 0;
}