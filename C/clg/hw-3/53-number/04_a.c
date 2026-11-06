#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    // Number Pattern 04.
    printf("Enter the value of n: ");
    scanf("%d", &x);

    int n=0;
    int i=x;
    while(n<i){
        int m=x;
        while(m>0){
            if(n==0){
                printf("1");
                m--;
            }
            else if(n>0 && n<(x-1)){
                if(m==i){
                    printf("1");
                }
                else if(m>1 && m<(i)){
                    printf("0");
                }
                else if(m==1){
                    printf("1");
                }
                m--;
                //printf("\n");
            }
            else if(n==(i-1)){
                printf("1");
                m--;
            }

        }
        printf("\n");
        n++;
    }

    return 0;
}
