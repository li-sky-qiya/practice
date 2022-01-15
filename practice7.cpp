#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数：\n");
	scanf("%d%d", &a, &b);
	while (a % b)
	{
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	printf("最大公约数为：%d", b);
	return 0;
}//辗转相除法