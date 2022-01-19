#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	int i = 0;
	printf("请输入一个整数：\n");
	scanf("%d", &num);
	for (i = 0; i < 32; i++)
	{
		if (1 == ((num >> i) & 1))
		{
			count++;
		}
	}
	printf("count = %d\n", count);
	return 0;
}