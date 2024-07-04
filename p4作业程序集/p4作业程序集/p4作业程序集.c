#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int max(int a, int b)
{
	if (a - b > 0)
	{
		return a;
	}
	else
		return b;
}
int main()
{
	int x = 2;
	int y = 3;
	printf("两数最大值为：》%d\n", max(x, y));

	return 0;
}