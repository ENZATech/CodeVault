#include<stdio.h>
int main(){
    int x;
    int j = 1;

    printf("Enter the number of lines you have to print: ");
    scanf("%d", &x);

    int i=1;
    while(j<=x){
        int k = 1;
        while(k<=j){
            printf("%d ", i);
            i++;
            k++;
        }
        j++;
        printf("\n");
    }

    return 0;
}