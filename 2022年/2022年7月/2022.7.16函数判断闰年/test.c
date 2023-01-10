#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Is_leap_year(int year)
{
	if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)
		return 1;
	else
		return 0;
}
int main(void)
{
	int n =1001;
	scanf("%d", &n);
	int ret=Is_leap_year(n);
	if(1==ret)
		printf("是闰年！");
	else
		printf("不是闰年！");
	return 0;

}