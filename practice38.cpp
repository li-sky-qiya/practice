#define _CRT_SECURE_NO_WARNINGS 1
//�жϷ��������s1����ͨ�������õ�s2����ôs2һ����s1s1���Ӵ�
//���磺s1 abcdef  s2 cdefab ,��ôs1s1  abcdefabcdef �оͰ��������и���Ҫ��� s2
//ֻ���ж� s2 �Ƿ�Ϊ s1s1 ���Ӵ�
#include<stdio.h>
#include<string.h>
#define N 256
int is_left_move(char* s1, char* s2)
{
	//ǰ��Ҫ�жϳ���Ҫ��ȣ����򳤶Ȳ���Ҳ���ܸ������Ӵ����㷨
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if (len1 != len2)
		return 0;
	//1.s1�ַ�������׷��һ��s1�ַ���
	//2.�ж��Ӵ�
	//strcat(char*,const char*) - �ַ���׷�Ӻ���,��������������׷��
	//strncat(char*,const char*,size_t) - �޶�׷�ӳ��ȵ��ַ���׷�Ӻ�������������׷��
	strncat(s1, s1, len1);
	//strstr(char* ,char*) - ���Ӵ�����,�ҵ������Ӵ����ַ���ַ���Ҳ������ؿ�ָ��
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