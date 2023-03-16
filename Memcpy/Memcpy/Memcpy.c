#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<assert.h>

void* Memcpy(void* dest, const void* source, size_t num)
{
	//断言
	assert(dest && source);

	//记录dest的起始地址
	void* ret = dest;
	size_t i = 0;
	for (i = 0; i < num; ++i)
	{
		*(char*)dest = *(char*)source;
		dest = (char*)dest + 1;
		source = (char*)source + 1;
	}
	return ret;
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[5] = { 0 };
	Memcpy(arr2, arr1, 8);
	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}