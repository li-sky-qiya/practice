#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int FindNum(int arr[3][3], int k, int* prow, int* pcol)
{
	int x = 0;
	int y = *pcol - 1;
	while (x <= *prow - 1 && y >= 0)
	{
		if (arr[x][y] > k)
			y--;
		else if (arr[x][y] < k)
			x++;
		else
		{
			*prow = x;
			*pcol = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int a[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
	int k = 5;
	int row = sizeof(a) / sizeof(a[0]);
	int col = sizeof(a[0]) / sizeof(a[0][0]);
	int ret = FindNum(a, k, &row, &col);//返回性参数
	if (ret == 1)
	{
		printf("Yes\n");
		printf("下标是：%d %d\n", row, col);
	}
	else
		printf("No\n");
	return 0;
}