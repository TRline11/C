#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define PIC 100
#include<stdlib.h>
#include<windows.h>
void menum()
{
	printf("#################################\n");
	printf("##### 1.��ʼ��Ϸ 0.�˳���Ϸ #####\n"); 
	printf("#################################\n");
}
void game()
{
	int re = rand() % PIC + 1;
	int guess = 0;
	printf("���ַ�Χ��0 - %d֮��\n", PIC);
	while (1)
	{
		printf("���������\n");
		scanf("%d", &guess);
		if (guess > re)
		{
			Sleep(800);
			system("cls");
			printf("���ִ���\n");
		}
		else if (guess < re)
		{
			Sleep(800);
			system("cls");
			printf("����С��\n");
		}
		else if (guess == re)
		{
			Sleep(800);
			system("cls");
			printf("ͨ����Ϸ:>>\n");
			system("shutdown -a");
			printf(">>���ע�����������\n");
			Sleep(5000);
			system("cls");

			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	
	do
	{
		menum();
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				system("shutdown -s -t 60");//����ʱ��ʮ��
				printf("ͨ����Ϸ�󽫽��ע�����������>>\n");
				Sleep(3000);
				system("cls");
				game();
				break;
			case 0:
				printf("�������˳�\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				system("cls");
				Sleep(2500);
		}
	} while (input);
	
	return 0;
}