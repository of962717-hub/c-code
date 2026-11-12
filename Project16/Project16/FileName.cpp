#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int b;
    int target = 66;

    while (1)
    {
        printf("please input number: ");
        scanf("%d", &b);

        if (b == target)
        {
            printf("you are right!\n");
            break;
        }
        else if (b < target)
        {
            printf("smaller, try again!\n");
        }
        else
        {
            printf("bigger, try again!\n");
        }
    }
    return 0;
}