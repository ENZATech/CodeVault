#include<stdio.h>
int main()
    {
        int a;
        int b;

        printf("The value of a: ");
        scanf("%d", &a);

        printf("The value of b: ");
        scanf("%d", &b);

        a>b?printf("The value of a is greater than b"):printf("The value of b is greater than a");

    }