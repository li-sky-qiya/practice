#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int DigitSum(unsigned int n)
{
	if (n > 9)
	{
		return DigitSum(n / 10) + n % 10;
	}
	else
	{
		return n;
	}
}
int main()
{
	unsigned int num = 0;
	int ret = 0;
	printf("请输入一个非负整数n：\n");
	scanf("%d", &num);
	ret = DigitSum(num);
	printf("ret = %d\n", ret);
	return 0;
}