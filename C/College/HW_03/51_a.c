#include<stdio.h>
int main(){
    int x=1;
    int y=0;
    int z;
    int n=0;
    int m=0;
    
    int j=1;

    // Pascal triangle upto to n rows.
    printf("Enter the number of rows of pascal triangle: ");
    scanf("%d", &n);

    while(j<=n){
        z=x+y;

        int k=1;
        while(k<=j){
            printf(" ");
            k++;
        }
        int q=1;
        while(q<=j){
            printf("%d \n", z);
            q++;
        }
        j++;
    }

    return 0;
}