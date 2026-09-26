// Matrix Transpose;
#include<stdio.h>
int matra(int[][3], int);
int matra(int a[][3], int n){
    int arr[3][3];

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            arr[i][j]=a[j][i];
        }
    }
    
    printf("The Matrix Transpose is: \n");

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }
}

int main(){
    int x[3][3];
    int n;

    for(int i=0; i<3; i++){
        printf("Enter %d row: \n", i+1);
        for (int j=0; j<3; j++){
            scanf("%d", &x[j][i]);
        }
        n=i+1;
    }

    printf("The input matrix is: \n");

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t", x[j][i]);
        }
        printf("\n");
    }
    matra(x, n);

    return 0;
}