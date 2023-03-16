#include<stdio.h>

#include<assert.h>

void* Memmove(void* dest, const void* source, size_t num)
{
	//断言
	assert(dest && source);

	//记录dest的起始位置
	void* ret = dest;

	//从前向后移动
	if (dest < source)
	{
		while (num--)
		{
			*(char*)dest = *(char*)source;
			dest = (char*)dest + 1;
			source = (char*)source + 1;

		}
	}
	//从后向前移动
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)source + num);
		}
	}
	return ret;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	Memmove(arr, arr + 2, 20);

	//计算arr数组的元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
	for (i = 0; i < sz; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}