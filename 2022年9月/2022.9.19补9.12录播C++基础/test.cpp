//#include<iostream>
//using namespace std;
//int main(void)
//{
//	cout << "hello world!" << endl;
//	return 0;
//}
//#include<iostream>
//int main(void)
//{
//	std::cout << "Hello World!" << std::endl;
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//namespace bit
//{
//	int rand = 0;
//}
////int rand = 0;//重定义rand，以前的定义是“函数”
//int main(void)
//{
//	printf("Hello Bit!\n");
//	printf("%p\n", rand);//打印函数名的地址
//	printf("%p", bit::rand);
//	return 0;
//}
//C++标准库的东西放进std命名空间
#include<iostream>
int main(void)
{
	std::cout << "Hello World!" << std::endl;
	int i = 0;
	double j = 10.11;
	std::cout << i << " " << j << &i << std::endl;
	return 0;
}