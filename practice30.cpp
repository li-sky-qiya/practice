#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int width = 0;
	printf("请输入菱形宽度(奇数):");
	//若此处输入偶数下面默认+1变成奇数
	scanf("%d", &width);
	int half_line = width / 2 + 1;
	//打印上半部分
	int i = 0;
	for (i = 0; i < half_line; i++)
	{
		//打印空格
		int j = 0;
		for (j = 0; j < half_line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for (i = 0; i < half_line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (half_line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}