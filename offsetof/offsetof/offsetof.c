#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stddef.h>

#define OFFSETOF(type, name) (size_t)&(((type*)0)->name)

struct S
{
	int a;
	double b;
	char c;
};

int main()
{
	printf("%d\n", (int)OFFSETOF(struct S, a));
	printf("%d\n", (int)OFFSETOF(struct S, b));
	printf("%d\n", (int)OFFSETOF(struct S, c));
	return 0;
}