#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#define N 100000
int main()
{
	int i = 0;
	for (i = 0; i <= N; i++)
	{
		//�ж� i �Ƿ�Ϊ������
		//1.���� i ��λ�� n
		//2.���� i ��ÿһλ n �η�֮��
		//3.�Ƚ� i == sum
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