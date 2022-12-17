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
//                cout << "手机号第一位必须是1" << endl;
//                fflush(stdin);
//                continue;
//            }
//            *(tel + n) = ch;
//        }
//        else
//        {
//            cout << "手机号必须是数字" << endl;
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
//            cout << "输入错误，请重新输入！\n" << endl;
//    }
//    return 0;
//}
