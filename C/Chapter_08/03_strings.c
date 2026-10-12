#include<stdio.h>
int main(){
    char st[10];
    char *ptr = "Aayush.";

    printf("Enter anything: ");
    scanf("%s", &st);

    printf("%s", st);

    printf("%s", ptr); // Not working now, but will one day.

    return 0;
}