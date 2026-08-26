// write a c program to swap first and last digit of a number.

#include <stdio.h>

int main()
{
    int i, first, last, n;

    printf("Enter number: ");
    scanf("%d", &i);

    last = i % 10;

    first = i;
    n = 1;

    while (first >= 10)
    {
        first = first / 10;
        n = n * 10;
    }

    i = (i % n) / 10;

    n = last * n + i * 10 + first;

    printf("Final number = %d\n", n);

    return 0;
}