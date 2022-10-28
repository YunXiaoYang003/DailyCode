#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int add1(int num)
//{
//	return num++;
//}//无效，因为是先传值再递增
//int add2(int num)
//{
//	return ++num;
//}
//void add3(int* p)
//{
//	return *p = *p + 1;
//}
//void add4(int* p)
//{
//	return ++*p ;
//}
//int main(void)
//{
//	int num = 0;
//	num=add1(num);
//	printf("num=%d//无效，因为是先传值再递增\n", num);//无效，因为是先传值再递增
//	num=add2(num);
//	printf("num=%d\n", num);
//	add3(&num);
//	printf("num=%d\n", num);
//	add4(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
//#include <stdio.h>
//void new_line()
//{
//    printf("haha\n");
//}
//void three_line()
//{
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        new_line();
//    }
//}
//int main()
//{
//    three_line();
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
////int main(void)
////{
////	char  arr[20] = "hello";
////	int ret = strlen(strcat(arr, "bit"));
////	printf("%d",ret);
////	return 0;
////}
//int main(void)
//{
//	printf("%d", printf("%d", printf("43")));
//	return 0;
//}
//#include<stdio.h>
//void Printf(unsigned int num)
//{
//	if (num > 9)
//	{
//		Printf(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main(void)
//{
//	int num = 1234;
//	Printf(num);
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		*s++;
//	}
//	return count;
//}
//int my_strlen(char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(++s);
//}
//int main(void)
//{
//	char arr[20] = "abc";
//	printf("%d", my_strlen(arr));
//	return 0;
//}