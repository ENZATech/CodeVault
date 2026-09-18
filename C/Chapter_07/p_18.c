//Column sum of 2D Matrix;
#include<stdio.h>
int csum(int [][4], int , int);
int csum(int a[][4], int n, int m){
    
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<m; j++){
            sum=sum + a[i][j];
        }
        printf("%d\t", sum);
    }
}

int main(){
    int x[4][4];
    int y;

    for(int i=0; i<4; i++){
        printf("Enter %d Column: \n", i+1);

        for(int j=0; j<4; j++){
            scanf("%d", &x[i][j]);
        }
    }
    printf("\n");

    for(int i=0; i<4; i++){

        for(int j=0; j<4; j++){
            printf("%d\t", x[j][i]);
        }
        printf("\n");
    }
    printf("\n");

    csum(x, 4, 4);

    return 0;
}