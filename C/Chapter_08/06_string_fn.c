#include<stdio.h>
#include<string.h>

int main(){
    char st[15];

    printf("Enter any word: ");
    scanf("%s", st);

    printf("The length of input word is: %d", strlen(st));

    return 0;
}