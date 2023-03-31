#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

char* Strncat(char* dest, const char* source, size_t num)
{
	//����
	assert(dest && source);
	//��¼dest����ʼ��ַ
	char* ret = dest;
	//�ҵ�Ŀ��ռ��'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	size_t i = 0;
	for (i = 0; i < num; ++i)
	{
		*dest++ = *source++;
	}
	*dest = '\0';
	return ret;
}

int main()
{
	char arr1[20] = "I love you ";
	char arr2[] = "Baby!XXXX";
	printf("%s\n", Strncat(arr1, arr2, 5));
	return 0;
}

