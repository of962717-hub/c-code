#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char c = 'a';
	char* pc = &c;
	//printf("%c\n", *pc);

	short sh = 10;
	short* ps = &sh;
	//printf("%d\n", *ps);

	int a = 100;
	int* p = &a;
	printf("%d\n", sizeof(pc));
	printf("%d\n", sizeof(ps));
	printf("%d\n", sizeof(p));
	return 0;
}