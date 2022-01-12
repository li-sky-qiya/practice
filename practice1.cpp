#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 10

long Jiecheng(int x)
{
	int i = 0;
	long jiecheng = 1;
	for (i = 1; i <= x; i++)
	{
		jiecheng = jiecheng * i;
	}
	return jiecheng;
}
int main()
{
	int i = 0;
	int sum = 0;
	int j;
	for (i = 1; i <= N; i++)
	{
		j = Jiecheng(i);
		sum = sum + j;
	}
	printf("1!+2!+3!+...+%d!=%d", N, sum);
	return 0;
}//这个写法可用性高，可以解决类似问题

//仅对于此题的优化算法
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("1!+2!+3!+...+10!=%d", sum);
//	return 0;
//}