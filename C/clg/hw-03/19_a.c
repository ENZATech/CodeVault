#include<stdio.h>
int main(){
    long long x;
    int y;
    int z;
    long long rev=0;

    long long x_2;
    int y_2;
    long long rev_2;
    printf("ENter the number: ");
    scanf("%lld", &x);

    long long i=x;
    int n=0;
    while(i!=0){
    y=i%10;
    i=i/10;
    rev=rev*10;
    rev=rev+y;
    n++;
    }
    y=0;
    int m=n;

    while(rev!=0){
        y=rev%10;
        rev=rev/10;

//2 132 435 672 == Two billion One hundred Thirty Two million Four hundred Thirty Five Thousand Six hundred Seventy Two.
//2 435 672 == Two million Four hundred Thirty Five Thousand Six hundred Seventy Two.
        if(m==2 || m==5 || m==8 || m==11){

            if(y==1){
                rev_2=rev;
                y_2=rev_2%10;
                if(y_2==1){
                    printf("Eleven ");
                }
                else if(y_2==2){
                    printf("Twelve ");
                }
                else if(y_2==3){
                    printf("Thirteen ");
                }
                else if(y_2==4){
                    printf("Fourteen ");
                }
                else if(y_2==5){
                    printf("Fifteen ");
                }
                else if(y_2==6){
                    printf("Sixteen ");
                }
                else if(y_2==7){
                    printf("Seventeen ");
                }
                else if(y_2==8){
                    printf("Eighteen ");
                }
                else if(y_2==9){
                    printf("Nineteen ");
                }
                else if(y_2==0){
                    printf("Ten ");
                }
                if(m==2 && y==1){
                    break;
                }
                if(m==5 || m==8 || m==11){
                    y=rev%10;
                    rev=rev/10;
                    m--;
                }

            }
            else if(y==2){
                printf("Twenty ");
            }
            else if(y==3){
                printf("Thirty ");
            }
            else if(y==4){
                printf("Forty ");
            }
            else if(y==5){

                printf("Fifty ");
            }
            else if(y==6){
                printf("Sixty ");
            }
            else if(y==7){
                printf("Seventy ");
            }
            else if(y==8){
                printf("Eighty ");
            }
            else if(y==9){
                printf("Ninty ");
            }
        
        }
            
        else{ 
                if(y==1){
                    printf("One ");
                }
                else if(y==2){
                    printf("Two ");
                }
                else if(y==3){
                    printf("Three ");
                }
                else if(y==4){
                    printf("Four ");
                }
                else if(y==5){
                    printf("Five ");
                }
                else if(y==6){
                    printf("Six ");
                }
                else if(y==7){
                    printf("Seven ");
                }
                else if(y==8){
                    printf("Eight ");
                }
                else if(y==9){
                    printf("Nine ");
                }
                
        }
        if(m==12){
            printf("hundred ");
        }
        else if(m==10){
            printf("billion ");
        }
        else if(m==9){
            printf("hundred ");
        }
        else if(m==7){
            printf("million ");
        }
        else if(m==6){
            printf("hundred ");
        }
        else if(m==4){
            printf("thousand ");
        }
        else if(m==3){
            printf("hundred ");
        }

        m--;
    }
    return 0;
}

/*
#include <stdio.h>

// Helper to print numbers from 1 to 999
void printThreeDigits(int n) {
    char *units[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                     "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
                     "Seventeen", "Eighteen", "Nineteen"};
                     
    char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    // Hundreds place
    if (n >= 100) {
        printf("%s Hundred ", units[n / 100]);
        n %= 100;
    }

    // Tens and Units place
    if (n >= 20) {
        printf("%s ", tens[n / 10]);
        if (n % 10 != 0) {
            printf("%s ", units[n % 10]);
        }
    } else if (n > 0) {
        printf("%s ", units[n]);
    }
}

void numberToWords(long long num) {
    if (num == 0) {
        printf("Zero\n");
        return;
    }

    // Process Billions (10^9)
    if (num >= 1000000000) {
        printThreeDigits(num / 1000000000);
        printf("Billion ");
        num %= 1000000000;
    }

    // Process Millions (10^6)
    if (num >= 1000000) {
        printThreeDigits(num / 1000000);
        printf("Million ");
        num %= 1000000;
    }

    // Process Thousands (10^3)
    if (num >= 1000) {
        printThreeDigits(num / 1000);
        printf("Thousand ");
        num %= 1000;
    }

    // Process Remaining Units (1 - 999)
    if (num > 0) {
        printThreeDigits(num);
    }

    printf("\n");
}

int main() {
    long long x;

    printf("Enter the number: ");
    if (scanf("%lld", &x) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    if (x < 0) {
        printf("Negative ");
        x = -x;
    }

    numberToWords(x);

    return 0;
}
    */