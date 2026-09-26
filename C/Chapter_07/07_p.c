#include<stdio.h>
int main(){
    int tab[10][3];

    for(int i=0; i<10; i++){
        tab[i][0]=2*(i+1);
        tab[i][1]=7*(i+1);
        tab[i][2]=9*(i+1);
        
    }
/*
    int base[3]={2, 7, 9};
    for(int i=0; i<10; i++){
        int j=0;
        while(j<3){
            tab[i][j]=base[j]*(i+1);
            j++;
        }
    }
*/

    for(int i=0; i<10; i++){
        for(int j=0; j<3; j++){
            printf("%d  ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}