// Fully working calculator;
#include<stdio.h>

int add(int, int *);
int add(int a, int *b){
    *b = *b + a;

}

int subs(int , int *);
int subs(int a, int *b){
    *b = *b - a;

}

int mult(int , int *);
int mult(int a, int *b){
    *b = *b * a;

}

float div(int , int *);
float div(int a, int *b){
    *b = *b / a;

}

int main(){
    char x;
    int y;
    int z=0;
    int p;

    printf("\n---Welcome---\n\n");
    printf("Enter + for addition, \n");
    printf("Enter - for multiplication, \n");
    printf("Enter * for multiplication and \n");
    printf("Enter / for division. \n");
    printf("Enter: ");
    scanf("%c", &x);


    //Addition;
    if(x=='+'){
        while(y!=0){
            printf("Enter number (0 to end): ");
            scanf("%d", &y);
            add(y, &z);
        }
        
    }
    
    //Substraction;
    else if(x=='-'){
        z=0;
        while(y!=0){
            printf("Enter number (0 to end): ");
            scanf("%d", &y);
            subs(y, &z);
        }
    }

    //Multiplication;
    else if(x=='*'){
        z=1;
        while(y!=1){
            printf("Enter number (1 to end): ");
            scanf("%d", &y);
            mult(y, &z);
        }
    }

    //Division;
    else if(x=='/'){
        z=1;
        while(y!=1){
            printf("Enter number (1 to end): ");
            scanf("%d", &y);
            div(y, &z);
        }
    }

    else{
        printf("Invalid input.!");
        printf("Run again.");
    }


    printf("\n");
    printf("Your answer is ");
    printf("%d\t", z);
    

    return 0;
}