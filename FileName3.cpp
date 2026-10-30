#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int sum(int a, int b)
{
	printf("add is used\n");
	int ret = a + b;
	return ret;
}
//int main()
//{
//	int x = 1;
//	int y = 2;
//	int ret=sum(x,y);
//	printf("ret=%d\n", ret);
//	return 0;
//}
int res(int a)
{
	int longlong = 1;
	for (int i = 1;i <= a;i++)
	{
		longlong *= i;
	}
	return longlong;
}
//main must  occur later than the function which you have defined before
int main()
{
	int a;
	printf("please input number:");
	scanf("%d", &a);
	int longlong = res(a);
	printf("ret=%d\n", longlong);
	return 0;
}
