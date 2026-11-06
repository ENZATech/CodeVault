#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    // Number Pattern 5;
    printf("Enter the value of n: ");
    scanf("%d", &x);

    int i=x;
    int n=0;

    if(x%2!=0){
        while(n<i){
            int m=x;
            while(m>0){
                if(n==(x/2) && m==(x/2)+1){
                    printf("0");
                }
                else{
                    printf("1");
                }
                m--;
            }
            printf("\n");
            n++;
        }
    }
    else{
        printf("Enter odd number.");
    }

    return 0;
}