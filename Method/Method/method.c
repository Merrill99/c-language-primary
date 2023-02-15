#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int method(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else
    {
        return method(n - 1) + method(n - 2);
    }
}

int main()
{
    int n = 0;
    while (scanf("%d", &n) == 1)
    {
        int ret = method(n);
        printf("%d", ret);
    }
    return 0;
}