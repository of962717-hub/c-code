#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	for (int b = 1;b <= 100;b++)
	{
		if (b % 10 == 9) 
		{
			a++;
		}
		else if (b / 10 == 9)
		{

			a++;
		}
	}
	
	printf("%d\n", a);


	return 0;
}

