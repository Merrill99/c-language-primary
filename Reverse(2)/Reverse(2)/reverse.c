#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

void reverse(char* left, char* right)
{
    while (left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main()
{
    char arr[10000] = { 0 };
    gets(arr);
    int len = strlen(arr);
    //传入数组首元素和末尾元素的地址
    reverse(arr, arr + len - 1);
    printf("%s\n", arr);
    return 0;
}