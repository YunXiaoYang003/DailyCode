#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int get_max(int x, int y)
{
	return  (x > y ? x : y);	
}
void swap1(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}
void swap2(int* px, int* py)
{
	int temp = *px;
	*px = *py;
	*py = temp;
}
int main(void)
{
	int a = 3;
	int b = 5;
	printf("����ǰ��a=%d,b=%d\n", a, b);
	//swap1(a, b);
	swap2(&a, &b);
	printf("������a=%d,b=%d", a, b);
	return 0;
}

/*char arr1[20] = { 0 };//�⺯������strcpy
char arr2[] = "abc";
strcpy(arr1, arr2);
printf("%s", arr1);*/

//char arr1[] = "hello bit!";//�⺯������memset
//memset(arr1, 'x', 5);
//printf("%s", arr1);

/*int a = 3;//�������������ֵ����get_max�����Զ��庯��
int b = 5;
int max = 0;
max = get_max(a, b);
printf("%d", max);*/