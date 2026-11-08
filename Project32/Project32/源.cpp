#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int fac(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	int ret = n * fac(n - 1);
//	return ret;
//}
//int main()
//{
//	int n=0;
//	printf("please input number:");
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d", ret);
//	return 0;
//}

//sum
//int sum(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	int ret = n + sum(n - 1);
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	printf("please input number:");
//	scanf("%d", &n);
//	int ret = sum(n);
//	printf("%d", ret);
//	return 0;
//}
//int feb(int n)
//{
//	if (n == 1||n==2)
//	{
//		return 1;
//	}
//	int ret= feb(n - 1) + feb(n - 2);
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	printf("please input number:");
//	scanf("%d", &n);
//	int ret = feb(n);
//    printf("%d", ret);
//	return 0;
//}
int Pow(int n,int k)
{
	if (k == 1)
	{
		return n;
	}
	return n* Pow(n , k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	printf("please input number:");
	scanf("%d %d", &n,&k);
	int ret = Pow(n,k);
	printf("%d", ret);
	return 0;
}