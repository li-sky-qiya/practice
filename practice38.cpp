#define _CRT_SECURE_NO_WARNINGS 1
//判断方法：如果s1可以通过左旋得到s2，那么s2一定是s1s1的子串
//例如：s1 abcdef  s2 cdefab ,那么s1s1  abcdefabcdef 中就包含了所有复合要求的 s2
//只需判断 s2 是否为 s1s1 的子串
#include<stdio.h>
#include<string.h>
#define N 256
int is_left_move(char* s1, char* s2)
{
	//前提要判断长度要相等，否则长度不等也可能复合是子串的算法
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 != len2)
		return 0;
	//1.s1字符串后面追加一个s1字符串
	//2.判断子串
	//strcat(char*,const char*) - 字符串追加函数,但不能用于自我追加
	//strncat(char*,const char*,size_t) - 限定追加长度的字符串追加函数，可以自我追加
	strncat(s1, s1, len1);
	//strstr(char* ,char*) - 找子串函数,找到返回子串首字符地址，找不到返回空指针
	char* ret = strstr(s1, s2);
	if (ret == NULL)
		return 0;
	else
		return 1;
}
int main()
{
	char s1[N] = "abcdef";
	char s2[] = "cdefab";
	int ret = is_left_move(s1, s2);
	if (ret == 1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}