#include <stdio.h>

int main() {
    char x;

    printf("Enter a character: ");
    scanf(" %c", &x);

    if (x >= 'a' && x <= 'z') {
        printf("You have typed a lower case alphabetic character: %c\n", x);
    }
    else if (x >= 'A' && x <= 'Z') {
        printf("You have typed an UPPER CASE alphabetic character: %c\n", x);
    }
    else if (x >= '0' && x <= '9') { // ✅ Fixed: Single quotes for character digits
        printf("You have typed a numerical character: %c\n", x);
    }
    else {
        printf("Invalid / Special character\n");
    }

    return 0;
}