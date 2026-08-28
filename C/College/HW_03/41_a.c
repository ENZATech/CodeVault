#include<stdio.h>
int main(){
    int x;
    int y;
    int z;

    int a=0;
    int b=1;
    int c;
    
    // Binary to Hexadecimal.
    printf("Enter the binary: ");
    scanf("%d", &x);

    int i=x;
    while(i!=0){
        y=i*10000;
        i=i/10000;

        int j=i;
        int k;
        while(j!=0){
            k=j%10;
            j=j/10;
            a=a+k*b;
            c=k*b;
            b=b*16;

        if(c<=9){
            printf("%d", a);
        }
        else if(c==10){
            printf("A");
        }
        else if(c==11){
            printf("B", a);
        }
        else if(c==12){
            printf("C", a);
        }
        else if(c==13){
            printf("D", a);
        }
        else if(c==14){
            printf("E", a);
        }
        else if(c==15){
            printf("F", a);
        }
        else{
            printf("If this is showing then unfortunately it's an error.!");
        }
        }
        

    }

    return 0;
}