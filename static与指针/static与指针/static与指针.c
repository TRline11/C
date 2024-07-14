#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
static int a = 333;//修饰全局变量；效果就是只能本源文件中使用无法再通过extern来声明；
int main()
{
	int c = 0;
	
	while (c < 4)
	{
		static int i = 0;
		c++;

	}
	//printf("%d\n", i);
	
	int i = 3;
	int* p = &i;
	printf("%p\n", p);
	return 0;
}