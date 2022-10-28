#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
//namespace bit
//{
//	int rand = 1;
//
//}
//
//int main(void)
//{
//	printf("%p\n", rand);//头文件<stdlib.h>中的函数名，即地址
//	printf("%d", bit::rand);
//}
//// test.cpp
//namespace N1
//{
//    int a;
//    int b;
//    int Add(int left, int right)
//    {
//        return left + right;
//    }
//    namespace N2
//    {
//        int c;
//        int d;
//        int Sub(int left, int right)
//        {
//            return left - right;
//        }
//    }
//}

//方法1：全部展开
//#include<iostream>
//using namespace std;
// 用起来就方便了，命名空间的隔离墙拆了
// 日常练习，算法，小程序，这么用可以，项目最好不要这么用
//
//int main()
//{
//	cout << "Hello world!" << endl;
//	return 0;
//}

////方法2：部分展开（指定展开） -- 常用展开，自己定义的时候避免跟常用重名即可
//#include<iostream>
// 
//using std::cout;//指定展开
//
//int main()
//{
//	cout << "Hello world!" << std::endl;
//	return 0;
//}

//方法3:不展开
//#include<iostream>//不展开
//
//int main()
//{
//	std::cout << "Hello world!" << std::endl;
//	return 0;
//}

#include<iostream>

using namespace std;

//// 1、参数类型不同
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//	return left + right;
//}

// 2、参数个数不同
//void f()
//{
//	cout << "f()" << endl;
//}
//void f(int a)
//{
//	cout << "f(int a)" << endl;
//}

// 3、参数类型顺序不同
void f(int a, char b)
{
	cout << "f(int a,char b)" << endl;
}
void f(char b, int a)
{
	cout << "f(char b, int a)" << endl;
}

int main()
{
	/*Add(10, 20);
	Add(10.1, 20.2);*/
	/*f();
	f(10);*/
	f(10, 'a');
	f('a', 10);
	return 0;
}











