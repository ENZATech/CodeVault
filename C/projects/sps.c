//Stone-Paper-Scissor;
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int match(char a[], char *b){
    int i=0;
    while(a[i] != '\0' && b[i] != '\0'){
        if(a[i]!=b[i]){
            i++;
            break;
        }
        i++;
    }
    
    if(a[i]=='\0'){
        printf("It's a Tie.");
        return 0;
    }
    
    i=0;
    char *x = "stone";
    char *y = "paper";
    char *z = "scissors";

    while(a[i] != '\0' && b[i] != '\0'){
        i++;
        
            if (b[i] == x[i] && a[i] == y[i])
            {
                if(a[i] == '\0' || b[i] == '\0'){
                    printf("You Won...!!");
                    return 1;
                }
            }
            else if(b[i] == y[i] && a[i] == z[i]){
                if(a[i] == '\0' || b[i] == '\0'){
                    printf("You Won...!!");
                    return 1;
                }
            }
            else if(b[i] == z[i] && a[i] == x[i]){
                if(a[i] == '\0' || b[i] == '\0'){
                    printf("You Won...!!");
                    return 1;
                }
            }
            else{
                printf("You lose.");
                return 0;
            }
    }
}

int main(){
    char st[9];
    int y;
    char *z;

    printf("\n--- Welcome ---\n\n");
    printf("Enter stone, paper or scissors: ");
    scanf("%s", &st);
    printf("\nYour response: %s \n", st);

    srand(time(0));
    y = (rand() % 3) + 1;

    //printf("%d", y);

    if(y==1){
        z="stone";

    }
    else if(y==2){
        z="paper";

    }
    else if(y==3){
        z="scissors";

    }

    printf("Computer choose: %s \n", z);

    match(st, z);

    return 0;
}