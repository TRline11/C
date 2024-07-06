#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdio.h>
#include<Windows.h>
int main()
{
	system("shutdown -s -t 120");
	printf("问：你是不是猪？\n");
	Sleep(5000);
	printf(":>你回答，我是猪\n");
	Sleep(5000);
	system("cls");
	printf(":>不然两分钟内把你电脑嘎了 T_T !\n");
	Sleep(3000);
	int i = 0;
	char arr[20] = "0";
	
	while (1)
	{
		printf("问：你是不是猪？\n");
		printf("答：");
		scanf("%s", &arr);
		if (!strcmp(arr, "我是猪"))
		{
			system("shutdown -a");
			printf(":>很好\n");
			Sleep(4000);
			printf(":>你是懂识时务的\n");
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
				printf(":>中国有句古话，叫识时务者为俊杰\n");
				Sleep(2000);
				printf(":>给你一个重新组织语言的机会\n");
				break;
			case 2:
				system("cls");
				printf("好小子，敬酒不吃吃罚酒是吧\n");
				Sleep(2000);
				printf("我再给你最后一次机会,你小子好好珍惜\n");
				break;
			default:
				system("cls");
				printf("你小子，收拾收拾文件等着嘎吧\n");
				Sleep(6000);
				return 0;
			}   
		}
	}
	
}