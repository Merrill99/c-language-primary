#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<assert.h>

char* Strstr(const char* str1, const char* str2)
{
	//断言
	assert(str1 && str2);

	const char* s1 = str1;
	const char* s2 = str2;
	//记录在str2字符中在str1中的起始地址
	const char* tmp = str1;
	while (*s2 != '\0')
	{
		s1 = tmp;
		s2 = str2;
		while (*s1 && *s2 && (*s1 == *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return tmp;
		}
		tmp++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "abbbcef";
	char arr2[] = "bbc";
	printf("%s\n", Strstr(arr1, arr2));
	return 0;
}