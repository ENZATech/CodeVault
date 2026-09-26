// 1 = 4 Lemons; 
// 1 = 2 Toffee;
// 2 = 1 Balloon;
// 5 = 1 Chocolate;

#include<stdio.h>

void print(int, int , int , int);
void print(int a, int b, int c, int d){
    printf("Lemons:    %d\tfor %d Rs.\n", 4*a, a);
    printf("Toffee:    %d\tfor %d Rs.\n", 2*b, b);
    printf("Balloons:  %d\tfor %d Rs.\n", c, 2*c);
    printf("Chocolate: %d\tfor %d Rs.\n", d, 5*d);
    printf(" \n");
}

int main(){
    int a; 
    int b;
    
    int money;

    printf("Enter the amount: ");
    scanf("%d", &money);

    for(int p=0; p<money; p++){
        for(int q=0; q<money; q++){
            for(int r=0; r<money; r++){
                for(int s=0; s<money/5; s++){
                    a = p + q + 2*r + 5*s;
                    b = 4*p + 2*q + r + s;

                    if(a==money && b== money){
                        print(p, q, r, s);
                    }

                }
            }
        }
    }

    return 0;
}