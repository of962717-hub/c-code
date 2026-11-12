#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0x11223344;
	int* p = &n;
	printf("%x\n", *p);



	return 0;
}