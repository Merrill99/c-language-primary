#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n = 0;
    int del = 0;
    scanf("%d", &n);
    int arr[50] = { 0 };
    int i = 0;
    //����n������
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }
    //������ɾ��������
    scanf("%d", &del);
    for (i = 0; i < n; ++i)
    {
        if (del == arr[i])
        {
            continue;
        }
        printf("%d ", arr[i]);
    }
    return 0;
}