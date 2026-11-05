#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
extern int g_val;
extern int Add(int x, int y);
int main()
{
	int ret = Add(1, 2);

	printf("%d\n", ret);
	return 0;
}



//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		test();
//	}
//	return 0;
//}