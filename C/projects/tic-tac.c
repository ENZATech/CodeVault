//Tic-Tac-Toe using C language,.
#include<stdio.h>

void tic_tac(int , int );
void tic_tac(int z, int m){
    int a = (z-1)/3;
    int b = (z-1)%3;
    

}

int main(){
    char x[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int z;

    int n=1;
    int m=0;

    printf("\nEnter your responses by just writing the number of each cell. \n\n");
    printf("Let's Start.! \n");
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){

            printf("%d", x[i][j]);
            if(j==0 || j==1){
                printf(" | ");
            }
        }
        printf(" \n");
    }
    
    while(m<=9){
        if(m%2==0){
            printf("X's turn: ");
            scanf("%d", &z);
            tic_tac(z, m);
            m++;
            
        }
        else if(m%2!=0){
            printf("Y's turn: ");
            scanf("%d", &z);
            tic_tac(z, m);
            m++;
            
        }
        
    }
    
    /*
    //Place this after the completion;
    if (x[row][col] == 'X' || x[row][col] == 'O') {
        printf("Slot already taken! Choose another.\n");
        continue; // Re-prompt without advancing the turn
    }
    */
    return 0;
}