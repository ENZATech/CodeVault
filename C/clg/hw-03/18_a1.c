#include<stdio.h>
int main(){
    int n;
    int temp;
    int digit;
    int count;
    int i = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);
    
    while(i <= 9){
        temp = n;
        count = 0;

        while(temp > 0){
            digit = temp % 10;

            if (digit == i){
                count++;
            }
            temp = temp / 10;
        }

        if(count > 0){
        printf("Frequency of %d = %d\n", i, count);
        }

        i++;
    }

    return 0;
}