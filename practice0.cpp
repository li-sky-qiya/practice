#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	long jiecheng = 1;
	printf("������n��ֵ��\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		jiecheng = jiecheng * i;
	}
	printf("n�Ľ׳�Ϊ:%d\n", jiecheng);
	return 0;
}