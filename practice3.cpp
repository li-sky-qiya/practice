#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "welcome to bit!!!!!";
	char arr2[] = "###################";
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//末尾有'/0'
	//int right = strlen(arr1)-1;//用这个函数需要引头文件#include<string.h>
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//这个语句的意思是停留1000ms即1s，需引用头文件#include<wiondows.h>
		system("cls");//system是执行系统命令的一个函数，头文件#include<stdlib.h>,cls-清空屏幕
		left++;
		right--;
	}
	return 0;
}