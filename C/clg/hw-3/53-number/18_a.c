#include<stdio.h>
int main(){
    int x;
    int y;
    int a;
    int b;
    int p=0;
    int q;

    // Number pattern 17;
    printf("Enter the number: ");
    scanf("%d", &x);
    int i=x;
    int n=0;
    while(n<x){
        int m=2*x+1;
            p=n;
            a=x;
            while(m>0){
                while(p>0){
                    printf("%d", a);
                    a=a-n;
                    p--;
                    m--;
                    b=a;
                }
                q=n;
                printf("%d", a);
                m--;

                if(m==q){
                    while(q>0){
                        b=b+1;
                        printf("%d", b);
                        q--;
                        m--;
                    }
                }
                //else
                //continue;
            }
        printf("\n");
        n++;
    }

    return 0;
}