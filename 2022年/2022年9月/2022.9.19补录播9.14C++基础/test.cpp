#include<stdio.h>
int a = 0;
int main(void)
{
	int a = 1;
	printf("%d\n", a);
	printf("%d\n", ::a);//::域作用限定符,左边是空白，意味着是全局/、
	return 0;
}
