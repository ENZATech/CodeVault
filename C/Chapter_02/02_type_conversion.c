#include<stdio.h>
int main()
{

    int a = 9;
    int b = 4;
    float c = 9.0/4.0; // Here, a and b are both integers, so the result of a / b will also be an integer. The value of c will be 2.0, not 2.25.
    printf("The value of a/b is: %f", c);
    
    float a = 9;
    int b = 4;
    float c = a/b; // Here, a and b are both integers, so the result of a / b will also be an integer. The value of c will be 2.0, not 2.25.
    printf("The value of a/b is: %f", c);

    return 0;
}