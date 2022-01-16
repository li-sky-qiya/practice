#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;//欲使/ 运算得到小数需除数和被除数至少有一个浮点数，故写1.0
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}