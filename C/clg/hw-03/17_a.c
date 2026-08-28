#include<stdio.h>
int main(){
    int x;
    int y;
    int rev=0;

    printf("Enter the number to check weather if it is palindrome or not: ");
    scanf("%d", &x);

    int i = x;
    while(i!=0){
        y=i%10;
        i=i/10;
        rev=rev*10;
        rev=rev+y;
    }
    if(x==rev){
        printf("This is a palindrome number. \n");
    }
    else{
        printf("This is not a palindrome number.");
    }
    return 0;
}