#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int n)
{
	int i = 0;
	printf("����λ���У�");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
	printf("ż��λ���У�");
	for (i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int num = 0;
	printf("������һ�����֣�\n");
	scanf("%d", &num);
	print(num);
	return 0;
}