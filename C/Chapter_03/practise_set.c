#include<stdio.h>
    int main()
    {
        int x;
    //    int B;
    //    int C;
    //    int D;
    //    int E;
    //    int F;

        printf("Type your number: ");
        scanf("%d", &x);

        if (x>=0 && x <= 100){
            
            if(90<=x){
                printf("You got grade A");
            }
            else if(x>=80){
                printf("You got grade B");
            }
            else if(x>=70){
                printf("You got grade C");
            }
            else if (x>=60){
                printf("You got grade D");
            }
            else if (x>=50){
                printf("You got grade E");
            }
            else if (x<=50){
                printf("You got grade F");
            }
            else {
                printf("Invalid marks");
            }
        }
        else {
            printf("Invalid marks");
        }
        return 0;
    }