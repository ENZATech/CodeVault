#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
    int tab[10][3];

    printf("Enter the table you want to print. \n");
    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    printf("Enter third number: ");
    scanf("%d", &z);

    for(int i=0; i<10; i++){
        tab[i][0]=x*(i+1);
        tab[i][1]=y*(i+1);
        tab[i][2]=z*(i+1);
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<3; j++){
            printf("%d  ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}