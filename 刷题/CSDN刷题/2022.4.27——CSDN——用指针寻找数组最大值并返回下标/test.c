#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define LEN 10
int main(int argc, char** argv)
{
    int i, max, index = 0;
    int arr[LEN] = { 7, 2, 1, 3, 6, 9, 4, 10, 5, 8 };
    max = arr[0];
    int* p = arr;
    for (i = 0; i < LEN; ++i, ++p)
        if (*p > max)
        {
            max = *p;
            index = i;
        }

    printf("max = arr[%d] = %d\n", index, max);

    return 0;
}