#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int Strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}

void reverse_string(char* string)
{
	int len = Strlen(string);
	char tmp = *string;//����Ԫ�ط�����ʱ������
	*string = *(string + len - 1);//�����һλԪ�ط���һ��λ
	*(string + len - 1) = '\0';//�����һλ����'\0'
	//���ַ��е�Ԫ�ش��ڻ��������ʱ����������
	if (Strlen(string) >= 2)
	{
		reverse_string(string + 1);
	}
	*(string + len - 1) = tmp;
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}