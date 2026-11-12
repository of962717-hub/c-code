#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;
	int result = 1;
	while (a <= 5)
	{
		result = result * a;
		a++;

		

	}
	printf("%d ", result);


	return 0;
}