#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 21
#include<string.h>
enum COLOR//枚举常量
{
	red,
	blue,
	gray,
};
int main()
{
	extern int a;//声明外部变量；
	const int v = 3;//const定义常变量属性；
	printf("char:%d\n", sizeof(char));
	printf("short:%d\n", sizeof(short));
	printf("int:%d\n", sizeof(int));
	printf("long:%d\n", sizeof(long));
	printf("long long:%d\n", sizeof(long long));
	printf("float:%d\n", sizeof(float));
	printf("double:%d\n", sizeof(double));
	printf("常变量属性%d\n", MAX);
		printf("外部变量：%d\n", a);
		enum COLOR s = blue;//枚举常量创建变量；
		printf("枚举常量：%d\n", s);
		char arr[] = "ABCD";
		char arrr[] = { 'A', 'B', 'C', 'D', 0 };//字符数组用{}做定义时要加‘’来定义；
		
		printf("strlen函数：%d\n", strlen(arr));//
		printf("arr数组：%s\n", arr);
		printf("arrr数组：%s\n", arrr);
	return 0;
}