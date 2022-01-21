#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double Power(int n, int k)
{
	if (k > 0)
	{
		return Power(n, k - 1) * n;
	}
	else if (k == 0)
	{
		return 1;
	}
	else
	{
		return (1.0 / (Power(n, -k)));
	}
}
int main()
{
	int n = 0;
	int k = 0;
	double ret = 0;
	printf("请输入底数n：");
	scanf("%d", &n);
	printf("请输入指数k：");
	scanf("%d", &k);
	ret = Power(n, k);
	printf("ret = %lf\n", ret);
	return 0;
}