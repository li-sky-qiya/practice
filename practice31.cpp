#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define MONEY_YOU_HAVE 20         //起始金额
#define EACH_PRICE 1              //每瓶汽水价格
#define EMPTY_VALUE 2             //几个空瓶换一瓶汽水
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
//总结数学规律可以写出更为简单的代码