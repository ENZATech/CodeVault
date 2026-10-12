#include<Stdio.h>
int main(){
    char st[50];

    printf("Enter any statement: ");
     gets(st);   // The entered string will be stored in it.
    // puts(st);    Used to print string just the same but places your cursor to next line.

    printf("Your statement was: '%s' \n", st);
    
    puts(st);

    printf("Hellow!");
    
    return 0;
}

// 'gets' has been discarded due to its buffer overflow problem.
// Now we use 'fgets' instead of 'gets.!

/*
 Also we can declare string using pointers!! Open 03_strings.c for more details.:
 
 for eg: 
 char *ptr = "Harry";
 
 A string defined using pointer can be initiallised.
*/