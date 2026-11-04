#include<stdio.h>
#include<string.h>

int main(){
    char st[15];

    printf("Enter any word: ");
    scanf("%s", st);

    printf("The length of input word is: %d \n", strlen(st));

    char source[] = {"Aayush"};
    char source_2[]  = {"Pd."};
    char target[15];

    strcpy(source, target);
    printf("%c \n", target);

    printf("%s \n", strcat(source, source_2));


    char s1[] = {"Red"};
    char s2[] = {"Dead"};

    printf("%d \n", strcmp(s1, s2));     //Negative value;
    printf("%d \n", strcmp(s2, s1));     //Positive value;

    return 0;
}