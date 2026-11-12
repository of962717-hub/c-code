#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	int b;
	scanf("%d %d", &a, &b);
	int m = a / b;
	int n = a %  b;
	printf("%d %d", m, n);
	return 0;



}