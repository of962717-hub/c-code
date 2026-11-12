#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a ,b,c,d,e;

	printf("input two numbers:");
		scanf("%d%d", &a, &b);
		
	if (a < 0) a = -a;
	if (b < 0) b = -b;
	d = a * b;
	while (b!= 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	e = d / a;
	printf("%d\n", e);
	return 0;
}