#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(int argc, char** argv)
{
    int x, y;
    x = 2, y = 8;

    printf("����ǰ��x = %d, y = %d\n", x, y);
    swap(&x,& y);
    printf("������x = %d, y = %d\n", x, y);

    return 0;
}