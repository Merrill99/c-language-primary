#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

char* Strncpy(char* dest, const char* source, size_t num)
{
	//����
	assert(dest && source);
	//��¼dest����ʼ��ַ
	char* ret = dest;
	size_t i = 0;
	for (i = 0; i < num; ++i)
	{
		*dest = *source;
		dest++;
		source++;
	}
	return ret;
}

int main()
{
	char arr1[] = "I love you!";
	char arr2[] = "XXXXXXXXXXX";
	printf("%s\n", Strncpy(arr2, arr1, 6));
	return 0;
}