#include<stdio.h>
int main(){
    long long x;
    int y;
    int z;

    int c;
    long long p=1;
    
    // Binary to Hexadecimal Number system.
    printf("Enter the binary: ");
    scanf("%lld", &x);

    if(x==0){
        printf("The Hexadecimal form is: 0 \n");
        return 0;
    }

    long long i=x;
    while(i>=10000){
        p=p*10000;
        i=i/10000;
    }
    i=x;
    while(p>0){
        y=i/p;
        i=i%p;
        p=p/10000;

        int a=0;
        int b=1;
        int j=y;
        int k;
        while(j!=0){
            k=j%10;
            j=j/10;
            a=a+k*b;
            b=b*2;

            /*
            printf("%d \n", k);
            printf("%d \n", j);
            printf("%d \n", a);
            */
        }
        if(a<=9){
            printf("%d", a);
        }
        else if(a==10){
            printf("A");
        }
        else if(a==11){
            printf("B", a);
        }
        else if(a==12){
            printf("C", a);
        }
        else if(a==13){
            printf("D", a);
        }
        else if(a==14){
            printf("E", a);
        }
        else if(a==15){
            printf("F", a);
        }
        else{
            printf("If this is showing then unfortunately it's an error.!");
        }

    }

    return 0;
}