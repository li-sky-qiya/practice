#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	long jiecheng = 1;
	printf("请输入n的值：\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		jiecheng = jiecheng * i;
	}
	printf("n的阶乘为:%d\n", jiecheng);
	return 0;
}