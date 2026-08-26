#include<stdio.h>
int main(){
    long long x;
    int y;
    int z=0;
    int a=1;
    int b;
    int c;
    
    printf("Enter the binary number: ");
    scanf("%lld", &x);

    long long i=x;
    int n=1;
    while(i!=0){
        y=i%10;
        i=i/10;
        int m=n;
        while(m!=m-1){
            z=z+(y*a);
            m--;
            a=a*2;
            printf("%d \n", a);
            printf("%d \n", z);
        }
        n++;
    }
    printf("The Decimal form of given input is: ");
    printf("%d", z);

    return 0;
}










/*#include<stdio.h>
int x;
int y;
int z=0;

int main(){
    printf("Enter the binary form: ");
    scanf("%d", &x);

    float sum=1/2;
    int i=x;
    int n=0;

    while(i!=0){
        y=i%10;
        i=i%10;
        int m=n;
        if(y==1){
            while(m!=0){
                sum=sum*2;
                m--;
            }
            z=z+sum;
            n++;
        }
    }
    printf("The decimal form of give input is: ");
    printf("%d", z);
}
*/