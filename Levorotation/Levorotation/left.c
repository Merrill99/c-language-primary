#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<string.h>

char* levorotation(char* str, int k, int sz)
{
	char* ret = str;
	int i = 0;
	for (i = 0; i < k; ++i)
	{
		int j = 0;
		//左旋一个字符
		for (j = 0; j < sz - 1; ++j)
		{
			char tmp = str[j];
			str[j] = str[j + 1];
			str[j + 1] = tmp;
		}
	}
	return ret;
}
int main()
{
	int k = 0;
	char str[] = "ABCD";
	//计算字符串的长度
	int sz = strlen(str);
	//输入左旋的字符个数
	scanf("%d", &k);
	printf("%s\n", levorotation(str, k, sz));
	return 0;
}