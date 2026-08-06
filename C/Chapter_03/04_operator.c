#include<stdio.h>
int main()
    {
        int a;
        int b;
        int c;
        int d;
        int e;
        int f;
        int g;

        a = 5;
        a = a++;

        b = 7;
        b = ++b;

        c = 9;
        c = --c;

        d = 11;
        d = d--;

        e = 12;
        e +=2;  // Exactly same as "e = e + 2"

        printf("The value of a is: %d\n", a);
        printf("The value of b is: %d\n", b);
        printf("The value of c is: %d\n", c);
        printf("The value of d is: %d\n", d);
        printf("The value of e is: %d\n", e);
    return 0;
    }
