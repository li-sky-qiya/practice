#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("��������������\n");
	scanf("%d%d", &a, &b);
	while (a % b)
	{
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	printf("���Լ��Ϊ��%d", b);
	return 0;
}//շת�����