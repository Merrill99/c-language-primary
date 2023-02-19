#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//定义凶手
	char killer = '0';
	//利用ASCII码值，遍历A-D，筛选出凶手
	for(killer = 'A'; killer <= 'D'; killer++)
	{
		//A说：不是我。
		//B说：是C。
		//C说：是D。
		//D说：C在胡说
		//三个人中只有一个人说了假话,证明这四个判断语句加起来的返回值为3
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			printf("%c是凶手\n", killer);
		}
	}

	return 0;
}