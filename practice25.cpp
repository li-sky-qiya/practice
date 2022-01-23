#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int k = 0;
	int count = 0;
	printf("请输入两个整数：\n");
	printf("m = ");
	scanf("%d", &m);
	printf("n = ");
	scanf("%d", &n);
	k = m ^ n;
	while (k != 0)
	{
		k = k & (k - 1);
		count++;
	}
	printf("count = %d\n", count);
	return 0;
}