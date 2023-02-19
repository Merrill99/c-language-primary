#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	//遍历，分别筛出他们可能出现的名次
	for (a = 1; a <= 5; ++a)
	{
		for (b = 1; b <= 5; ++b)
		{
			for (c = 1; c <= 5; ++c)
			{
				for (d = 1; d <= 5; ++d)
				{
					for (e = 1; e <= 5; ++e)
					{
						//每个人都说对了一半
						//则说明两个条件只有一个正确，总返回值为1
						if (((2 == b) + (3 == a) == 1) && ((2 == b) + (4 == e) == 1) &&
							((1 == c) + (2 == d) == 1) && ((5 == c) + (3 == d) == 1) &&
							((4 == e) + (1 == a) == 1))
						{
							//附加判断条件，防止名次出现重复
							if ((a + b + c + d + e == 15) && (a * b * c * d * e == 120))
							{
								printf("A = %d ,B = %d ,C = %d ,D = %d ,E = %d\n", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}