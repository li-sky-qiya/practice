#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MONEY_YOU_HAVE 20         //��ʼ���
#define EACH_PRICE 1              //ÿƿ��ˮ�۸�
#define EMPTY_VALUE 2             //������ƿ��һƿ��ˮ
int main()
{
	int money = MONEY_YOU_HAVE;
	int total = 0;
	int empty = 0;
	total = money / EACH_PRICE;
	empty = total;
	while (empty >= EMPTY_VALUE)
	{

		total += empty / EMPTY_VALUE;
		empty = empty / EMPTY_VALUE + empty % EMPTY_VALUE;
	}
	printf("total = %d\n", total);
	return 0;
}
//�ܽ���ѧ���ɿ���д����Ϊ�򵥵Ĵ���