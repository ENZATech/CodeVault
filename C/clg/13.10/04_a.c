#include<stdio.h>
int cube(int n, int m){
    if(m==3){
        return ;
    }
    m++;

    return n * cube(n, m);
}
int main(){
    int x;
    
    printf("Enter the number: ");
    scanf("%d", &x);

    cube(x, 3);

    return 0;
}