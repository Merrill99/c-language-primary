#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<assert.h>

char* Strcat(char* dest, const char* source)
{
	//����
	assert(dest && source);

	//��¼dest����ʼ��ַ�����㷵��
	char* ret = dest;

	//�ҵ�Ŀ��ռ��е�'\0'
	while (*dest)
	{
		dest++;
	}
	//��ԭ�ַ���׷�ӵ�Ŀ���ַ����е�'\0'��
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