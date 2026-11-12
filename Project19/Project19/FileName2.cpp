#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int v,result=0;
	printf("please input number:");
	scanf("%d", &v);
	while (v != 0)
	{
		int b = v % 10;
		result = result * 10 + b;
		v = v / 10;
	}
	printf("%d\n",result);
	return 0;
}