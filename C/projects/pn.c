// Every Phone number can be changed to zeroes and one if we multiply them by a specific number. ~ a Pd.
#include<stdio.h>
int main(){
    long long x;
    long long x_1;
    long long x_2 = -1;
    int y;

    printf("Enter your phone number: ");
    scanf("%lld", &x);

    long long i=1;

    while(x_2 != 0){
        x_1 = x;
        x_1 = x_1 * i;

        x_2 = x_1;
        while(x_2 != 0){
            y = x_2 % 10;
            if(y == 0 || y == 1){
                x_2 = x_2 / 10;
                
            }
            else{
                i++;
                break;
            }
            // printf("y %d \n", y);
        }

        // printf("i  %d \n", i);
        // printf("x_1 %d \n", x_1);
    }
    printf("\nThe required number is: %lld \n", i);
    // printf("x_1 %d \n", x_1);

    return 0;
}