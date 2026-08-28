#include<stdio.h>
    int main(){
        int x;

        printf("Enter teh month number: ");
        scanf("%d", &x);

        if(x>=1 && x<=12){
            if(x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12){
                printf("This month have 31 days.");
            }
            else if(x == 4 || x == 6 || x == 9 || x == 11){
                printf("This month have 30 days.");
            }
            else{
                printf("This month have 28 days (If not a leap year).");
            }
        }
        else{
            printf("Enter a number between 1 to 12");
        }
    }