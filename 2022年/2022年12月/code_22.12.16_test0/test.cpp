//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//int getTel(char* tel)
//{
//    char ch;
//    int n = 0;
//    while (n != 11)
//    {
//        cin >> ch;
//        if (ch >= '0' && ch <= '9')
//        {
//            if (n == 0 && ch != '1')
//            {
//                cout << "�ֻ��ŵ�һλ������1" << endl;
//                fflush(stdin);
//                continue;
//            }
//            *(tel + n) = ch;
//        }
//        else
//        {
//            cout << "�ֻ��ű���������" << endl;
//            fflush(stdin);
//            n = 0;
//            continue;
//        }
//        n++;
//    }
//    *(tel + n) = '\0';
//    return n;
//}
//int main()
//{
//    char tel[12] = { 0 };
//    int n;
//    while (1)
//    {
//        n = getTel(tel);
//        if (n == 11)
//        {
//            cout << tel << endl;
//            break;
//        }
//        else
//            cout << "����������������룡\n" << endl;
//    }
//    return 0;
//}
