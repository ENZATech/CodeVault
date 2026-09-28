#include<stdio.h>
int main(){

    char st[4];
    printf("Enter any 3 characters: ");
    scanf("%3s", st);   // %3s will only acquiure first 3 input characters.

    printf("The input characters are: ");
    printf("%s", st);
    return 0;
}