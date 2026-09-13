#include <stdio.h>
int main(){
    int marks[3][2] = {{4, 5}, {11, 8}, {24, 35}};

    int *ptr= &marks[0][0];

    for(int i=0; i<6; i++){
        printf("The arrays in memory are as follows: %d \n", *ptr);
        printf("%d \n", ptr);
        ptr++;
    }

    return 0;
}