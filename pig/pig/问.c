#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdio.h>
#include<Windows.h>
int main()
{
	system("shutdown -s -t 120");
	printf("�ʣ����ǲ�����\n");
	Sleep(5000);
	printf(":>��ش�������\n");
	Sleep(5000);
	system("cls");
	printf(":>��Ȼ�������ڰ�����Ը��� T_T !\n");
	Sleep(3000);
	int i = 0;
	char arr[20] = "0";
	
	while (1)
	{
		printf("�ʣ����ǲ�����\n");
		printf("��");
		scanf("%s", &arr);
		if (!strcmp(arr, "������"))
		{
			system("shutdown -a");
			printf(":>�ܺ�\n");
			Sleep(4000);
			printf(":>���Ƕ�ʶʱ���\n");
			Sleep(4000);
			return 0;
		}
		
		else
		{
			i++;
			switch (i)
			{
			case 1:
				system("cls");
				Sleep(3000);
				printf(":>�й��о�Ż�����ʶʱ����Ϊ����\n");
				Sleep(2000);
				printf(":>����һ��������֯���ԵĻ���\n");
				break;
			case 2:
				system("cls");
				printf("��С�ӣ����Ʋ��ԳԷ����ǰ�\n");
				Sleep(2000);
				printf("���ٸ������һ�λ���,��С�Ӻú���ϧ\n");
				break;
			default:
				system("cls");
				printf("��С�ӣ���ʰ��ʰ�ļ����Ÿ°�\n");
				Sleep(6000);
				return 0;
			}   
		}
	}
	
}