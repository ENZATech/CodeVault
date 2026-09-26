// 1 = 3 Lemon
// 2 = 5 Toffee
// 7 = 2 baloon

#include<stdio.h>

void print(int , int , int );
void print(int a, int b, int c){
    printf("Lemons:   %d \n", 3*a);
    printf("Toffee:   %d \n", 5*b);
    printf("Balloons: %d \n", 2*c);
    printf("\n");
    
}

int main(){
    int a;
    int b;

    for(int x=0; x<90; x++){
        for(int y=0; y<90/2; y++){
            for(int z=0; z<90/7; z++){
                a = x + 2*y + 7*z;
                b = 3*x + 5*y + 2*z;

                if(a==90 && b==90){
                    print(x, y, z);
                    // continue;
                }

            }

        }

    }


    return 0;
}

// 24_p == DONE;