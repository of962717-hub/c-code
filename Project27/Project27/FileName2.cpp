#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[3][3] = { {1,2,3,},{4,5,6},{7,8,9} };
	int row = 3;
	int col = 3;
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("=====================\n");
	for (int i = 0;i < row;i++)
	{
		for (int j = i+1;j <col;j++)
		{
			int tmp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = tmp;
		}
	}
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}