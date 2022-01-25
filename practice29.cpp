#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#define N 100000
int main()
{
	int i = 0;
	for (i = 0; i <= N; i++)
	{
		//判断 i 是否为自幂数
		//1.计算 i 的位数 n
		//2.计算 i 的每一位 n 次方之和
		//3.比较 i == sum
		int n = 1;
		int tmp = i;
		int sum = 0;
		while (tmp /= 10)
		{
			n++;
		}
		tmp = i;
		while (tmp)
		{
			sum += (int)(pow(tmp % 10, n));
			tmp /= 10;
		}
		if (i == sum)
		{
			printf("%d ", i);
		}
	}
	return 0;
}