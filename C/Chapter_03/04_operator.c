#include<stdio.h>
int main()
    {
        int a;
        int b;
        int c;
        int d;

        a = 5;
        a = a++;

        b = 7;
        b = ++b;

        c = 9;
        c = --c;

        d = 11;
        d = d--;

        printf("The value of a is: %d\n", a);
        printf("The value of b is: %d\n", b);
        printf("The value of c is: %d\n", c);
        printf("The value of d is: %d\n", d);
    return 0;
    }
