#include<stdio.h>
int main()
{
    int x;
    int y;

    printf("Enter the number: ");
    scanf("%d", &x);

    y=x%7;

    switch(y){
        case 0:
            printf("Monday.");
            break;
        case 1:
            printf("Tuesday.");
            break;
        case 2:
            printf("Wednesday.");
            break;
        case 3:
            printf("Thursday.");
            break;
        case 4:
            printf("Friday.");
            break;
        case 5:
            printf("Saturday.");
            break;
        case 6:
            printf("Sunday.");
            break;
        default:
            printf("Invalid.");
    }
}