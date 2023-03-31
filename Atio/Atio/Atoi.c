#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int Atoi(const char* str)
{
	//记录str的起始位置
	char* tmp = (char*)str;
	//记录数字的位数
	int count = 0;
	//记录最终结果
	int ret = 0;
	while (*tmp != '\0')
	{
		if (*tmp >= 48 && *tmp <= 57)
		{
			count++;
			tmp++;
		}
		else
			break;
	}
	tmp = (char*)str;
	//开辟空间，将整型数字放入
	int* arr =(int*)malloc(count * sizeof(int));
	//判断如果开辟空间失败的情况
	if (arr == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	while (*tmp != '\0')
	{
		if (*tmp >= 48 && *tmp <= 57)
		{
			*(arr + i) = *tmp - 48;
			i++;
			tmp++;
		}
		else
			break;
		
	}
	//遍历arr
	for (i = 0; i < count; ++i)
	{
		ret += arr[i] * (int)pow(10, count - i - 1);
	}
	//释放空间
	free(arr);
	arr = NULL;
	return ret;
}

int main()
{
	char arr1[] = "123lo4v5er";
	char arr2[] = "292942";
	printf("%d\n", Atoi(arr1));
	printf("%d\n", Atoi(arr2));
	return 0;
}