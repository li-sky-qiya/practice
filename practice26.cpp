#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int n)
{
	int i = 0;
	printf("奇数位序列：");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	printf("偶数位序列：");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int num = 0;
	printf("请输入一个数字：\n");
	scanf("%d", &num);
	print(num);
	return 0;
}