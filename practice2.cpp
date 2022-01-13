#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 11;
	int left = 0;
	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
	int mid = 0;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (k == arr[mid])
		{
			printf("找到了k，下标为：%d\n", mid);
			break;
		}
		else if (k < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	if (left > right)
	{
		printf("找不到k\n");
	}
	return 0;
}