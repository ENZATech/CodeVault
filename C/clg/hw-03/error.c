#include <stdio.h>

int main(){
    int x;
    int y;
    int z;
    int n = 1;      // Used as divisor (powers of 16)
    int m = 0;

    // Decimal Number system to Hexadecimal Number System...
    printf("Enter the Decimal Number: ");
    scanf("%d", &x);

    if (x == 0) {
        printf("The Hexadecimal value is: 0\n");
        return 0;
    }

    // Step 1: Find the largest power of 16 (n)
    int i = x;
    while(i >= 16){
        n = n * 16;
        i = i / 16;
    }

    printf("The Hexadecimal value is: ");

    // Step 2: Extract and print hex digits from Left to Right
    i = x;
    while(n > 0){
        y = i / n;       // Extracts leftmost hex digit (0 to 15)
        i = i % n;       // Keeps the remainder
        n = n / 16;      // Moves to the next power of 16

        if(y <= 9){
            printf("%d", y);
        }
        else if(y == 10){
            printf("A");
        }
        else if(y == 11){
            printf("B");
        }
        else if(y == 12){
            printf("C");
        }
        else if(y == 13){
            printf("D");
        }
        else if(y == 14){
            printf("E");
        }
        else if(y == 15){
            printf("F");
        }
    }
    printf("\n");

    return 0;
}