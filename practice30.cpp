#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int width = 0;
	printf("���������ο��(����):");
	//���˴�����ż������Ĭ��+1�������
	scanf("%d", &width);
	int half_line = width / 2 + 1;
	//��ӡ�ϰ벿��
	int i = 0;
	for (i = 0; i < half_line; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < half_line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ�°벿��
	for (i = 0; i < half_line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (half_line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}