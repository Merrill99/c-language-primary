#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

char* Strcpy(char* dest, const char* source)
{
	//断言，防止传入空指针
	assert(dest && source);
	//记录目标位置的起始地址
	char* ret = dest;
	//把source指向的字符串拷贝到dest指向的数组空间中，包括'\0'字符
	while (*dest++ = *source++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "I Love You";
	char arr2[20] = { 0 };
	printf("%s\n", Strcpy(arr2, arr1));
	return 0;
}