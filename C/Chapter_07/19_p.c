// Sum of each row of a 2D Array;
#include<stdio.h>
int rsum(int [][3], int );
int rsum(int a[][3], int n){
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<n; j++){
            printf("%d\t", a[i][j]);
            sum = sum+a[i][j];
        }
        printf("= %d\n", sum);
        
    }
}

int main(){
    int x[3][3];
    int n=0;

    for(int i=0; i<3; i++){
        printf("Enter %d row: \n", i+1);
        for(int j=0; j<3; j++){
            scanf("%d", &x[i][j]);
        }
        n=i+1;
    }
    printf("\n");

/*
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }
*/

    rsum(x, n);
    return 0;
}