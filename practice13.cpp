#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 100
void menu()
{
	printf("***************************\n");
	printf("***1.进入游戏 0.退出游戏***\n");
	printf("***************************\n");
}

void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand() % N + 1;//生成1-N之间的随机数，rand函数调用#include<stdlib.h>,一般配合srand函数使用
	while (1)
	{
		printf("请猜数字：>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
}





int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//为生成随机数生成随机初始值，一般指执行一次，不放在循环体里面
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}