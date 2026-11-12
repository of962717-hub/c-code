#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[5] = { 1,2,3,4,5};
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int j = len - 1;
	for (int i = 0;i < len;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	while (i < j)
	{

		int tmp = arr[i];
		 arr[i] = arr[j];
		 arr[j] = tmp;
		 i++;
		 j--;
	}
	for (int i = 0;i < len;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}