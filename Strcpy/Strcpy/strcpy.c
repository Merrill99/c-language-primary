#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

char* Strcpy(char* dest, const char* source)
{
	//���ԣ���ֹ�����ָ��
	assert(dest && source);
	//��¼Ŀ��λ�õ���ʼ��ַ
	char* ret = dest;
	//��sourceָ����ַ���������destָ�������ռ��У�����'\0'�ַ�
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