#include<stdio.h>
int main(){
    int x;
    int y;
    int z;
    
    // Octal number sytem to Hexadecimal Number system...!
    printf("enter the Octal Number: ");
    scanf("%d", &x);

    int i=x;
    int n=0;
    while(i!=0){
        y=i%10;
        i=i/10;
        n++;
        int p=1;
        while(n>=0){
            z=z+y*p;
            p=p*8;
            n--;
        }
    }

    return 0;

    //To be continued...
}