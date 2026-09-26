#include<stdio.h>
int main(){

    // char st[] = {'a', 'b', 'c', '\0'};
    char st[] = "abc";      // Same as above.;

    for(int i=0; i<4; i++){
        printf("%c \n", st[i]);
    }

    return 0;
}