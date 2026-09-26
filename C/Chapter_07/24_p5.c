// 1 = 4 Lemons; 
// 1 = 2 Toffee;
// 2 = 1 Balloon;

#include<stdio.h>

void print(int , int , int );
void print(int a, int b, int c){
    printf("Lemons:   %d\tfor %d Rs. \n", 4*a, a);
    printf("Toffee:   %d\tfor %d Rs. \n", 2*b, b);
    printf("Balloons: %d\tfor %d Rs. \n", c, 2*c);
    printf("\n");
}

int main(){
    int a; 
    int b;
    int money;

    printf("Enter the amount: ");
    scanf("%d", &money);

    for(int x=0; x<money; x++){
        for(int y=0; y<money; y++){
            for(int z=0; z<money; z++){
                a = x + y + 2*z;
                b = 4*x + 2*y + z;

                if(a==money && b==money){
                    print(x, y, z);
                }

            }
        }
    }

    return 0;
}