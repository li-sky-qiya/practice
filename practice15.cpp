#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 1000
int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[N] = { 0 };
	printf("请输入一串字符：\n");
	scanf("%s", arr);
	int len = my_strlen(arr);
	printf("字符串长度为：%d\n", len);
	return 0;
}