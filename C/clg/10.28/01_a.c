#include<Stdio.h>
int main(){
    int x[10];

    printf("Enter the elements in the array: \n");

    for(int i=0; i<5; i++){
        printf("Enter: ");
        scanf("%d", &x[i]);
    }

    printf("Your input array is: \n");
    for(int i=0; i<5; i++){
        printf("%d \n", x[i]);
    }

    return 0;
}