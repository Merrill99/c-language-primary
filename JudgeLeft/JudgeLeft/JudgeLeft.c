
#include<stdio.h>

#include<string.h>

//判断一个字符串是否为另外一个字符串旋转之后的字符串
//是则返回1
//不是则返回0
int JudgeLeftMove(char arr1[], char arr2[])
{
	size_t len = strlen(arr1);

	int i = 0;
	for (i = 0; i < len; ++i)
	{
		int j = 0;
		//左旋一个字符
		for (j = 0; j < len - 1; ++j)
		{
			char tmp = arr1[j];
			arr1[j] = arr1[j + 1];
			arr1[j + 1] = tmp;

			//左旋一个字符后就进行判断是否与arr2相等
			if (0 == strncmp(arr1, arr2, len))
			{
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int ret = JudgeLeftMove(arr1, arr2);
	if (1 == ret)
	{
		printf("Yes!\n");
	}
	else
	{
		printf("No!\n");
	}
	return 0;
}