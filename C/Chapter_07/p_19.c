//Row sum of 2D Matrix;
#include<stdio.h>
int rsum(int [][3], int, int);
int rsum(int a[][3], int n, int m){

        int sum=0;
        for(int j=0; j<m; j++){
            sum=sum+a[j][n];
        }
        printf("%d", sum);
}

int main(){
    int x[3][3];
    int y;

    for(int i=0; i<3; i++){
        printf("Enter the row: \n");

        for(int j=0; j<3; j++){
            scanf("%d", &x[j][i]);
        }
    }
    printf("\n");

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t", x[j][i]);
        }
        int n=i+1;
        rsum(x, n, 3);
        printf("\n");
    }
    

    return 0;
}