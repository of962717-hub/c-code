#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[2][3] = { 0 };
	int row = 2;
	int col = 3;
	for (int i = 0;i < row;i++)
	{
		for (int j = 0;j < col;j++)
		{
			printf("&[%d][%d]=%d\n", i, j, &arr[i][j]);
		}
	}
	return 0;
}
