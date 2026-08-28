#include<stdio.h>
    int main(){
        char x;

        printf("Enter the character: ");
        scanf("%c", &x);

        if(x>='a' && x<='z' || x>='A' && x<='Z'){
            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
                printf("%c is an vovel.!", x);
            }
            else if(x!='a' || x!='e' || x!='i' || x!='o' || x!='u'){
                printf("%c is a consonent.", x);
            }
        }
        else{
            printf("Invalid character.!!");
        }
    }