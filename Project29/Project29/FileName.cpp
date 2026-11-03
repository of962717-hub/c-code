#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Print(int arr[], int len)
{
	for (int i = 0;i < len;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//void Reverse(int arr[5], int len)
//{
//	int i = 0;
//	int j = len - 1;
//	while (i < j)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//		i++;
//		j--;
//	}
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(arr[2]);
//	Print(arr,len);
//	Reverse(arr, len);
//	Print(arr, len);
//	return 0;
//}
void set_arr(int arr1[], int len, int val)
{
	for (int i = 0;i < len;i++)
	{
		arr1[i] = val;
	}
}
int main()
{
	int arr[5] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	set_arr(arr, len, -1);
	Print(arr, len);
	return 0;
}













//int is_leap_year(int year)
//{
	//if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	//{
		//return 1;
	//}
	//return 0;
//}
//int main()
//{
	//int y;
	//printf("please input year:");
	//scanf("%d", &y);
	//if (is_leap_year(y))
	//{
	//	printf("%d is leap year\n",y);
	//}
	//else 
	//{
	//	printf("%d is not leap year\n",y);
	//}
	//return 0;
//}
	
	