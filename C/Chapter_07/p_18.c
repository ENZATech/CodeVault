// Column Sum of a 2D array;
#include<stdio.h>
int csum(int [][3], int );
int csum(int a[][3], int n){
    for(int j=0; j<n; j++){
        int sum=0;
        for(int i=0; i<n; i++){
            sum = sum+a[i][j];
        }
        printf("%d\t", sum);
    }
}

int main(){
    int x[3][3];
    int n;

    for(int i=0; i<3; i++){
        printf("Enter %d row: \n", i+1);
        for(int j=0; j<3; j++){
            scanf("%d", &x[i][j]);
        }
        n=i+1; 
    }

    printf("\n");

    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            printf("%d\t", x[i][j]);
        }
        printf("\n");
    }

    csum(x, n);

    return 0;
}