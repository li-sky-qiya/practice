#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "welcome to bit!!!!!";
	char arr2[] = "###################";
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//ĩβ��'/0'
	//int right = strlen(arr1)-1;//�����������Ҫ��ͷ�ļ�#include<string.h>
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//���������˼��ͣ��1000ms��1s��������ͷ�ļ�#include<wiondows.h>
		system("cls");//system��ִ��ϵͳ�����һ��������ͷ�ļ�#include<stdlib.h>,cls-�����Ļ
		left++;
		right--;
	}
	return 0;
}