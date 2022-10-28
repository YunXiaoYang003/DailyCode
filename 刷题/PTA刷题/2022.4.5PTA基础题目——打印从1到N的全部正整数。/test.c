#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//错误地方：中英文输入混淆，细节\n没写
void PrintN(int N);
int main()
{
    int N;

    scanf("%d", &N);
    PrintN(N);

    return 0;
}

/* 你的代码将被嵌在这里 */
void PrintN(int N)
{
    int i;
    for (i = 1; i <= N; i++)
        printf("%d\n",i);
}