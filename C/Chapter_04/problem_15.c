#include<stdio.h>
int main(){
    int a;
    int b;

    int x;
    int y=0;
    int n=1;
    
    printf("Press 1 for addition, press 2 for substraction, press 3 for multiplication and 4 for division.");
    scanf("%d", &a);
    printf("Enter the numbers you want to add one by one. \n");
    printf("Enter 0 to see result. \n");


    do{
        if(a=1){
        printf("Enter %d Number: ", n);
        scanf("%d", &x);
        y=y+x;
        n++;
        }

        // Substraaction.
        else if(a=2){
            printf("Enter %d Number: ", n);
            scanf("%d", &x);
            y=y-x;
            n++;
        }

        //Multiplication.
        else if(a=3){
            printf("Enter %d Number: ", n);
            scanf("%d", &x);
            y=y*x;
            n++;
        }

        // Division.
        else if(a=4){
            printf("Enter %d Number: ", n);
            scanf("%d", &x);
            y=y/x;
            n++;
        }
        else{
            printf("Invalid Input. Try again.");
        }
    }while(x!=0);
    

    if(a=1)
    printf("The Total sum of input values is: %d", y);

    else if(a=2)
    printf("The Total sum of input values is: %d", y);

    else if(a=3)
    printf("The Total sum of input values is: %d", y);

    else if(a=4)
    printf("The Total sum of input values is: %d", y);

    return 0;
}