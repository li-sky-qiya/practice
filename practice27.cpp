#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char* str)
{
	assert(str);
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[256] = { 0 };
	printf("请输入字符串:>");
	gets_s(arr);//读取一行函数，VISIO环境下gets()写法
	reverse(arr);
	printf("逆序后的字符串为：%s\n", arr);
	return 0;
}