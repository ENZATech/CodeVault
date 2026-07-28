#include<stdio.h>
int main()
{

    int p, r, t;

    printf("Enter Principal: ");
    scanf("%d", &p);

    printf("Enter Rate: ");
    scanf("%d", &r);

    printf("Enter Time: ");
    scanf("%d", &t);

    printf("Simple Interest is: %.2f", p*r*t/100.0);


    return 0;
}