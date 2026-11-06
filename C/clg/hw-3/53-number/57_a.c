#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    // Number Pattern 57;
    printf("Enter the number: ");
    scanf("%d", &x);

    int i=2*x-1;
    int n=0;
    while(n<i){
        int m=2*n+1;
        int a=0;
        int j=0;
        int k=i-n;
        while(m>0){
            if(m>n){
                while(j<n+1){
                    a=a+1;
                    printf("%d", a);
                    j++;
                }
            }
            else if(m<=n){
                while(k>=0){
                    a=a-1;
                    printf("%d", a);
                    k--;
                }
            }
            m--;
        }
        printf("\n");
        n++;
    }
    return 0;
}