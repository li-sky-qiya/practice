#define _CRT_SECURE_NO_WARNINGS 1
//暴力求解法
#include<stdio.h>
#include<string.h>
#include<assert.h>
void left_move(char arr[], int k)
{
	assert(arr);
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < k; i++)
	{
		//每次左旋一个字符
		char tmp = *arr;
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = tmp;
	}
}
int main()
{
	char arr[] = "abcdef";
	int k = 2;
	left_move(arr, k);
	printf("%s\n", arr);
	return 0;
}