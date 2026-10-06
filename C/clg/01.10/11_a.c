#include<stdio.h>

int count(int [], int);

int count(int a[], int n){
    int p=0;
    for(int i=0; i<n; i++){
        if(a[i]>0){
            p++;
        }
    }
    return p;
}

int main(){
    int pos[100];
    int x=0;

    while(1){
        printf("Enter an integer: (0 to End) ");
        scanf("%d", &pos[x]);
        if(pos[x]==0){
            break;
        }

        x++;
    }

    printf("The number of positive integers in array is: %d", count(pos, x));

    return 0;
}