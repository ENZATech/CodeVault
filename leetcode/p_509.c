#include<stdio.h>
int main(){
    int x;
    int y;
    int n=0;

    printf("Enter the number: ");
    scanf("%d", &x);

    while(x!=0){
        if(x%2==0){
            int i=x;
            while(i%2==0){
                i=i/2;
                n++;
            }
            x=i;
        }
        else{
            x=x-1;
            n++;
        }
    }
    printf("%d", n);
    return 0;
}

//Pending Submission.