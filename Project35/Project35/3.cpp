#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	short arr[] = { 1,2,3,4 };
	short* p = &arr[0];
	printf("%p\n", p + 1);

	printf("%p\n", &arr[1]);



	return 0;
}
