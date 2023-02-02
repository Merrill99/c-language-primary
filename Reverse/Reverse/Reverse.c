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
	char tmp = *string;//将首元素放入临时变量中
	*string = *(string + len - 1);//将最后一位元素放入一号位
	*(string + len - 1) = '\0';//将最后一位放入'\0'
	//当字符中的元素大于或等于两个时，继续逆序
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