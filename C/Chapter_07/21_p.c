// Array Palindrome Checker;
#include<stdio.h>
int palin(int[], int);
int palin(int a[], int n){

    int m=0;
    for(int i=0; i<n; i++){
        if(a[i]==a[n-i-1]){
            m++;
        }
    }
    if(m>(n/2)){
        printf("Yes, it is a palindrome number.!");
    }
    else{
        printf("No, This is not."); 
    }
}

int main(){
    int x;
    int y[100];
    int n; 

    printf("Enter the number: ");
    scanf("%d", &x);



    for(int i=0; i<100; i++){
        y[i]=x%10;
        x=x/10;
        n=i;
    }

    palin(y, n);

    return 0;
}