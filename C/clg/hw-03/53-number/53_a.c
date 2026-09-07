#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    //Number pattern 43;
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(i!=0){
        printf("%d \n", i);
        i=i/10;
        n++;
    }
    return 0;
}