#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 2;
	for (i = 0; i <= 100; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
			printf("%d ", i);
	}
	return 0;
}
//优化后代码
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		for (j = 2; j <= sqrt(i); j++)//sqrt函数是取平方函数
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//	return 0;
//}