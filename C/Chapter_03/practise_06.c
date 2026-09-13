#include<stdio.h>
int main(){
    int x;

    printf("Enter the number: ");
    scanf("%d", &x);

    switch(x){
        case 1:
            printf("Monday.");
            break;
        case 2:
            printf("Tuesday.");
            break;
        case 3:
            printf("Wednesday.");
            break;
        case 4:
            printf("THursday.");
            break;
        case 5:
            printf("Friday.");
            break;
        case 6:
            printf("Sunday ");
            break;
        default:
            printf("Invalid Input!");
    }
}