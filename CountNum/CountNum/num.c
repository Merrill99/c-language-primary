#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int NumberOf1(int n)
{
    //ͳ��1�ĸ���
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
    //����Ϊ1������1�ĸ���
    int ret = num1 ^ num2;
    printf("%d", NumberOf1(ret));
    return 0;
}