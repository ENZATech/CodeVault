#include<stdio.h>
int main(){
    int x;
    int d=1;
    int q;

    // Decimal to hexadecimal Number system.
    printf("Enter the number: ");
    scanf("%d", &x);

    int t=x;
    while(t>=16){
        t=t/16;
        d=d*16;
    }
    t=x;
    while(d>0){
        if(t/d>9){
            q=t/d-10+'A';
        }
        else {
            q=t/d+'0';
        }
        printf("%c", q);
        //printf("%d \n \n", t/d);
        t=t%d;
        d=d/16;
    }
    return 0;
}