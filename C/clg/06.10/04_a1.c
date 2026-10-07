#include <stdio.h>

int find(char [], char *);
int find(char a[], char *b){
    for(int i=0; i<20; i++){
        if(a[i] == *b){
            printf("'%c' exists at index %d.\n", *b, i);
            return 1;
        }
    }
printf("can't find '%c'", *b);
return 0;
}

int main() {
    char x[20];
    char y;
    char *z;

    printf("Enter the character: \n");
    for(int i=0; i<20; i++){
        printf("Enter: ");
        scanf(" %c", &x[i]);
        
        if(x[i] == '0'){
            //i--;
            break;
        }
    }

    printf("Enter the char you want to find: ");
    scanf(" %c", &y);
    z=&y;

    find(x, z);
    
    return 0;
}