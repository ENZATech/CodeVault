#include<stdio.h>
int main(){
    long long x;
    int y;
    int dec=0;
    int rev=1;

    // Binary number system to Octal number system.
    printf("Enter the Binary number: ");
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
    printf("The Octal form of given input is: ");
    printf("%d", dec);
    return 0;
}

/*
#include <stdio.h>

int main() {
    long long binary;
    long long octal = 0;
    long long place = 1; 

    printf("Enter the binary number: ");
    scanf("%lld", &binary);

    // Outer loop: Processes 3 bits in one jump
    while (binary != 0) {
        int chunk = binary % 1000; // Extracts the last 3 binary digits (e.g., 101)
        int octal_digit = 0;
        int power = 1;             // 1 (2^0), 2 (2^1), 4 (2^2)

        // Inner loop: Converts the 3-bit chunk into a single octal digit (0 to 7)
        while (chunk != 0) {
            int bit = chunk % 10;
            octal_digit = octal_digit + (bit * power);
            power = power * 2;
            chunk = chunk / 10;
        }

        // Add the octal digit to the result using place value
        octal = octal + (octal_digit * place);
        place = place * 10;

        binary = binary / 1000; // Drop the 3 processed binary digits
    }

    printf("The Octal form of given input is: %lld\n", octal);

    return 0;
}
    
// Grabs the last three digits at once (e.g., 111000 % 1000 gives 0, and 111000 / 1000 leaves 111).
// The inner while loop only needs to run on the 3-digit chunk, doubling power ($1 \to 2 \to 4$) automatically without needing manual conditions like n == 3*m - 1.
*/