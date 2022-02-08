#define _CRT_SECURE_NO_WARNINGS 1
//利用逆序函数三步求解法
//1.将字符串分割为两部分，前k个元素为一部分，剩下的为一部分
//2.将两个字符串分别逆序
//3.最后整体再逆序一次
// ab cdef(k = 2)
// ba fedc
// cdef ba
#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr, arr + k - 1);//逆序左边
	reverse(arr + k, arr + len - 1);//逆序右边
	reverse(arr, arr + len - 1);//逆序整体
}
int main()
{
	char arr[] = "abcdef";
	int k = 2;
	left_move(arr, k);
	printf("%s\n", arr);
	return 0;
}