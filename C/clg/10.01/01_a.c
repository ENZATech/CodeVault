#include<stdio.h>
int main()
{
    int x=5;
    int y=10;

    int *temp;

    temp = &x;
    x=y;
    y=*temp;

    printf("%d, %d", x, y);
 
}
// This program will not work.