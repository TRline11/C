#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define PIC 100
#include<stdlib.h>
#include<windows.h>
void menum()
{
	printf("#################################\n");
	printf("##### 1.开始游戏 0.退出游戏 #####\n"); 
	printf("#################################\n");
}
void game()
{
	int re = rand() % PIC + 1;
	int guess = 0;
	printf("数字范围在0 - %d之间\n", PIC);
	while (1)
	{
		printf("请键入数字\n");
		scanf("%d", &guess);
		if (guess > re)
		{
			Sleep(800);
			system("cls");
			printf("数字大了\n");
		}
		else if (guess < re)
		{
			Sleep(800);
			system("cls");
			printf("数字小了\n");
		}
		else if (guess == re)
		{
			Sleep(800);
			system("cls");
			printf("通过游戏:>>\n");
			system("shutdown -a");
			printf(">>解除注销计算机任务\n");
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
				system("shutdown -s -t 60");//倒计时六十秒
				printf("通过游戏后将解除注销计算机任务>>\n");
				Sleep(3000);
				system("cls");
				game();
				break;
			case 0:
				printf("程序已退出\n");
				break;
			default:
				printf("选择错误请重新选择\n");
				system("cls");
				Sleep(2500);
		}
	} while (input);
	
	return 0;
}