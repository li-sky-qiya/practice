#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define N 5
void Exchange(int A[], int B[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = A[i];
		A[i] = B[i];
		B[i] = tmp;
	}
}
int main()
{
	int A[N] = { 0 };
	int B[N] = { 1,2,3,4,5 };
	int sz = N;
	Exchange(A, B, sz);
	return 0;
}