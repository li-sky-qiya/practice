#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fib(int x)
{
	if (x == 1)
	{
		return 1;
	}
	if (x == 2)
	{
		return 2;
	}
	int a = 1;
	int b = 2;
	int c = 1;
	while (x > 2)
	{
		c = a + b;
		a = b;
		b = c;
		x--;
	}

	return c;

}
int main()
{
	int n = 0;
	int ret = 0;
	printf("������̨����n��\n");
	scanf("%d", &n);
again:
	if (n <= 0)
	{
		printf("nӦΪ������������������n��");
		scanf("%d", &n);
		goto again;
	}

	ret = Fib(n);
	printf("���ܵ���������Ϊ��%d", ret);
}