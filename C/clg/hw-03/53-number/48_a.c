#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    //Number pattern 43;
    printf("Enter the number: ");
    scanf("%d", &x);

    int n=0;
    while(n<x){
        int m=2*x;
        while(m>0){
            int a=1;
            int p=n;
            int q=2*x-2;
            if(m>=x/2){
                while(p>0){
                    a=a+1;
                    printf("%d", a);
                    p--;
                    m--;
                }
                printf(" ");
                m--;
            }
            else if(m<x/2){
                printf(" ");
                m--;
                while(q<m){
                    printf("%d", a);
                    a=a-1;
                    q++;
                    m--;
                }
            }
        }
        printf("\n");
        n++;
    }
    return 0;
}