#include<stdio.h>
int main(){
    int marks[] = {32, 45, 66, 57};

    int* ptr= &marks[0];

    for(int i=0; i<4; i++){
        // printf("The value of marks is: %d \n", marks[i]);

        printf("The value of marks is: %d \n", *ptr); //This statement works same as above.
        ptr++;
    }
}