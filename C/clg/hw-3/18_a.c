#include<stdio.h>
int main(){
    long long x;
    int y;

    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int e=0;
    int f=0;
    int g=0;
    int h=0;
    int i=0;
    int j=0;

    // Find the frquency of digits of a number;
    printf("Enter the number: ");
    scanf("%lld", &x);

    long long p=x;
    while(p!=0){
        y=p%10;
        p=p/10;

        if(y==0){
            a++;
        }
        else if(y==1){
            b++;
        }
        else if(y==2){
            c++;
        }
        else if(y==3){
            d++;
        }
        else if(y==4){
            e++;
        }
        else if(y==5){
            f++;
        }
        else if(y==6){
            g++;
        }
        else if(y==7){
            h++;
        }
        else if(y==8){
            i++;
        }
        else if(y==9){
            j++;
        }
    }
    printf("The frequency of each of the digits are as follows: \n");
    if(a>0){
        printf("The frequency of 0 in %lld is: %d \n", x, a);
    }
    if(b>0){
        printf("The frequency of 1 in %lld is: %d \n", x, b);
    }
    if(c>0){
        printf("The frequency of 2 in %lld is: %d \n", x, c);
    }
    if(d>0){
        printf("The frequency of 3 in %lld is: %d \n", x, d);
    }
    if(e>0){
        printf("The frequency of 4 in %lld is: %d \n", x, e);
    }
    if(f>0){
        printf("The frequency of 5 in %lld is: %d \n", x, f);
    }
    if(g>0){
        printf("The frequency of 6 in %lld is: %d \n", x, g);
    }
    if(h>0){
        printf("The frequency of 7 in %lld is: %d \n", x, h);
    }
    if(i>0){
        printf("The frequency of 8 in %lld is: %d \n", x, i);
    }
    if(j>0){
        printf("The frequency of 9 in %lld is: %d \n", x, j);
    }

    return 0;
}