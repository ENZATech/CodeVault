#include<stdio.h>
int main(){
    int x[10];
    int n=0;

    printf("Enter the elements in the array: \n");
    for(int i=0; i<10; i++){
        printf("Enter (0 to end): ");
        scanf("%d", &x[i]);

        if(x[i] > 0){
            i--;
        }
        else if(x[i] == 0){
            i--;
            break;
        }
        n=i;
    }

    printf("The above array with only negative elements are: ");

    for(int i=0; i<=n; i++){
        printf("%d \n", x[i]);
    }

    return 0;
}