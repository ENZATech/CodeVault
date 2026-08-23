#include<stdio.h>
int main(){
    int x;
    int y;
    int n=0;

    printf("Enter the number: ");
    scanf("%d", &x);

    printf("The binary form of this number is: ");
    while(x!=0){
        if(x%2==0){
            int i=x;
            while(i%2==0){
                i=i/2;
                n++;
                printf("0");
            }
            x=i;
        }
        else{
            x=x-1;
            n++;
            printf("1");
        }
    }
    printf("\nNumber of steps taken for its simplification: %d", n);
    return 0;
}

//To be continued...