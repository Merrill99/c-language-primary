#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<assert.h>

int Strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2)
	{
		//���
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	//����ѭ��֤���в���ȵ�Ԫ��
	return (*str1 - *str2);
}
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdez";
	printf("%d\n", Strcmp(arr1, arr2));
	return 0;
}