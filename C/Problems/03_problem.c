#include <stdio.h>
int main()
{

    int c, f;

    printf("Enter Celcius: ");
    scanf("%d", &c);

    printf("Fahrenheit is: %.2f", c * (9.0 / 5.0) + 32);

    return 0;
}