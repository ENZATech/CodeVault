#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    // Perfect Number or not!

    printf("Enter the number: ");
    scanf("%d", &x);

    int i=x;

    int n=1;
    while(i>0){
        i=i-n;
        n++;
    }
    if(i<0){
        printf("This is not a Perfect Number bro!");
    }
    else if(i==0){
        printf("This is surely a Perfect number.");
    }
    else
        printf("If you are seeing this, then unforntunately its an error.!");

    return 0;
}