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
//	printf("%p\n", rand);//ͷ�ļ�<stdlib.h>�еĺ�����������ַ
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

//����1��ȫ��չ��
//#include<iostream>
//using namespace std;
// �������ͷ����ˣ������ռ�ĸ���ǽ����
// �ճ���ϰ���㷨��С������ô�ÿ��ԣ���Ŀ��ò�Ҫ��ô��
//
//int main()
//{
//	cout << "Hello world!" << endl;
//	return 0;
//}

////����2������չ����ָ��չ���� -- ����չ�����Լ������ʱ������������������
//#include<iostream>
// 
//using std::cout;//ָ��չ��
//
//int main()
//{
//	cout << "Hello world!" << std::endl;
//	return 0;
//}

//����3:��չ��
//#include<iostream>//��չ��
//
//int main()
//{
//	std::cout << "Hello world!" << std::endl;
//	return 0;
//}

#include<iostream>

using namespace std;

//// 1���������Ͳ�ͬ
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

// 2������������ͬ
//void f()
//{
//	cout << "f()" << endl;
//}
//void f(int a)
//{
//	cout << "f(int a)" << endl;
//}

// 3����������˳��ͬ
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











