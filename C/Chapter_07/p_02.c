#include<stdio.h>
int main(){
    int tab[10];
    int x;

    printf("Enter the number you want the table of: ");
    scanf("%d", &x);
    

    for(int i=0; i<10; i++){
        tab[i] = x*(i+1);
    }

    for(int i=0; i<10; i++){
        printf("%d X %d = %d \n", x, i+1, tab[i]);

    }
    return 0;
}