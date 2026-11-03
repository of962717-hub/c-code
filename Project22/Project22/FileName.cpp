#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[5] = { 1,2,3,4,5};
	for (int i = 0;i < 5;i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0;i < 5;i++)
	{

		printf("%d\n", arr[i]);
	}

	



	return 0;
}