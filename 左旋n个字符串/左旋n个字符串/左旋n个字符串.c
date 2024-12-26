#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void levorotation(char* arr,int n)
{
	int i = 0;
	char* left=arr;
	char* right =&arr[n-1];
	while (left<right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "abcde";
	int input = 0;
	int middle = strlen(arr);
	scanf("%d", &input);
	levorotation(arr,input);
	levorotation(arr + input, middle - input);
	levorotation(arr, middle);
	printf("%s\n", arr);
	return 0;
}