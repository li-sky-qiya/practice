#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int FindNum(int arr[3][3], int k, int row, int col)
{
	//ÿ�κ����������Ͻǵ�Ԫ�رȽϣ����ݽ��ɾ��һ�л�һ��
	//ͬ�����½�Ҳ��
	int x = 0;
	int y = col - 1;
	while (x <= row - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int a[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
	int k = 7;
	int ret = FindNum(a, k, 3, 3);
	if (ret == 1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}