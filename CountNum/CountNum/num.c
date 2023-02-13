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
    int num1 = 0;
    int num2 = 0;
    scanf("%d %d", &num1, &num2);
    //相异为1，数出1的个数
    int ret = num1 ^ num2;
    printf("%d", NumberOf1(ret));
    return 0;
}