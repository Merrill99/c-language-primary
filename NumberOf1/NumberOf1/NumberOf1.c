#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int NumberOf1(int n) 
{
    //统计1的个数
    int count = 0;
    int a = 1;
    while (a)
    {
        if ((n & 1) == 1)
        {
            count++;
        }
        n >>= 1;
        a <<= 1;
    }
    return count;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = NumberOf1(n);
    printf("%d\n", ret);
    return 0;
}