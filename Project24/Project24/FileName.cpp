#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int len = sizeof(arr) / sizeof(arr[2]);
	for (int i = 0;i < len;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = 0;i < len;i++)
	{
		arr[i] = arr[i] * 2;
	}
	for (int i = 0;i < len;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}