#include<stdio.h>
int fact(int a){
    int b=1;

    while(a>1){
        b=b*a;
        a--;
    }
    return b;
}

int main(){
    int x;
    int f;

    printf("Enter the number: ");
    scanf("%d", &x);

    f = fact(x);
    printf("%d", f);

    return 0;
}