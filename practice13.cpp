#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 100
void menu()
{
	printf("***************************\n");
	printf("***1.������Ϸ 0.�˳���Ϸ***\n");
	printf("***************************\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % N + 1;//����1-N֮����������rand��������#include<stdlib.h>,һ�����srand����ʹ��
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}





int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//Ϊ������������������ʼֵ��һ��ִָ��һ�Σ�������ѭ��������
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}