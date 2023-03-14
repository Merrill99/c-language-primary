#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<assert.h>

char* Strcat(char* dest, const char* source)
{
	//断言
	assert(dest && source);

	//记录dest的起始地址，方便返回
	char* ret = dest;

	//找到目标空间中的'\0'
	while (*dest)
	{
		dest++;
	}
	//将原字符串追加到目标字符串中的'\0'上
	while (*dest++ = *source++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "I Love You ";
	char arr2[] = "Baby!";
	printf("%s\n", Strcat(arr1, arr2));
	return 0;
}