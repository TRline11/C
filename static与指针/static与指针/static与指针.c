#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
static int a = 333;//����ȫ�ֱ�����Ч������ֻ�ܱ�Դ�ļ���ʹ���޷���ͨ��extern��������
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