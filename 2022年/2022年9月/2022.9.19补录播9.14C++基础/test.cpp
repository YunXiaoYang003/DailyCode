#include<stdio.h>
int a = 0;
int main(void)
{
	int a = 1;
	printf("%d\n", a);
	printf("%d\n", ::a);//::�������޶���,����ǿհף���ζ����ȫ��/��
	return 0;
}
