#include<stdio.h>
#include<math.h>

int main(){
    int a=5;
    printf("The area of this square is: %d \n", pow(a , 2)); // This will show output 0 as pow is a double return data type.
    printf("The area of this square is: %f \n", pow(a , 2)); // Here we are using "%f" as pow is a double return data type.

    return 0;
}