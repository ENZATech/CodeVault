#include<stdio.h>
int main(){
    long long x;
    int y;
    int z;
    int sum = 0;

    int dec=0;
    int rev=1;

    // Octal Number system to Binary Number system.
    
    printf("Enter the octal number: ");
    scanf("%lld", &x);

    long long i=x;
    int n=1;
    int m=1;
    while(i!=0){
        int z=0;
        while(n<=3*m){
            y=i%10;
            i=i/10;
            int sum=1;
            if(n==3*m-2){
                if(y==1){
                    // sum=sum*10;
                    sum=1;
                }
                else if(y==0){
                    sum=0;
                    n++;
                    continue;
                }
                z=z+sum;
            }
            else if(n==3*m-1){
                if(y==1){
                    // sum=sum*10;
                    sum=sum*2;
                }
                else if(y==0){
                    sum=0;
                    n++;
                    continue;
                }
                z=z+sum;
            }
            else if(n==3*m){
                if(y==1){
                    // sum=sum*10;
                    sum=sum*2;
                    sum=sum*2;
                }
                else if(y==0){
                    sum=0;
                    n++;
                    continue;
                }
                z=z+sum;
            }
            else{
                printf("Thre is some error.");
            }
            n++;
        }
        m++;
        dec = dec + z * rev;
        rev = rev * 10;
    }

    long long z_1=0;
    int n_1;
    if (dec == 0) {
        printf("The Binary form of given input is: 0\n");
        return 0;
    }
    
    int j=dec;
    while(j!=0){
        int p=1;
        n_1=1;
        while(p*2<=j){
                n_1=n_1*10;
                // printf("%d \n", n);
                // printf("%d \n", i);
                // break;
                p=p*2;
        }
        z_1 = z_1 + n_1; 
        j = j - p;
    }
    printf("%lld \n", z_1);

    return 0;
}