#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("��������������\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		int tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("�Ӵ�С���Ϊ��%d %d %d\n", a, b, c);
	return 0;
}