#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MAX 21
#include<string.h>
enum COLOR//ö�ٳ���
{
	red,
	blue,
	gray,
};
int main()
{
	extern int a;//�����ⲿ������
	const int v = 3;//const���峣�������ԣ�
	printf("char:%d\n", sizeof(char));
	printf("short:%d\n", sizeof(short));
	printf("int:%d\n", sizeof(int));
	printf("long:%d\n", sizeof(long));
	printf("long long:%d\n", sizeof(long long));
	printf("float:%d\n", sizeof(float));
	printf("double:%d\n", sizeof(double));
	printf("����������%d\n", MAX);
		printf("�ⲿ������%d\n", a);
		enum COLOR s = blue;//ö�ٳ�������������
		printf("ö�ٳ�����%d\n", s);
		char arr[] = "ABCD";
		char arrr[] = { 'A', 'B', 'C', 'D', 0 };//�ַ�������{}������ʱҪ�ӡ��������壻
		
		printf("strlen������%d\n", strlen(arr));//
		printf("arr���飺%s\n", arr);
		printf("arrr���飺%s\n", arrr);
	return 0;
}