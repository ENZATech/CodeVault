#include<stdio.h>
int main()
{

    int a = 5;
    int b = 10;
    int c = a + b;

    printf("the value of a is %d the value of b is %d the value of c is %d\n", a, b, c);

    //modulus operator is used to find the remainder of a division operation. It is represented by the symbol %.
    printf("The remainder when b is divided by a is %d\n", b % a);
    
/*
    % cannot be applied to float or double data types. It can only be used with integer data types. If you try to use the modulus operator with float or double, you will get a compilation error.
    % sign is same as numerator and denominator. It is used to find the remainder of a division operation. For example, 10 % 3 = 1, because when 10 is divided by 3, the remainder is 1.
    int i = ab //invalid
    int i = a * b //valid

    int a * b = c //invalid
    int c = a * b //valid

    int and int -> int
    float and float -> float
    int and float -> float
    
*/

    return 0;
}