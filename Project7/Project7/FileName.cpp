
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	if (num >= 10)
	{
		printf("num >=10");

	}
	else if (num >= 5 && num < 10)
	{
		printf("num>=5&&num<10");


	else
		printf("num<5");
	}

	return 0;
}










}