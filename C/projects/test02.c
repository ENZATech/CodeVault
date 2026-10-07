#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Custom function to compare two strings using a loop
int areStringsEqual(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' || b[i] != '\0') {
        if (a[i] != b[i]) {
            return 0; // Found a mismatch
        }
        i++;
    }
    return 1; // Strings match completely
}

int main() {
    char st[20];
    char *z;
    int y;

    printf("\n--- Welcome ---\n\n");
    printf("Enter stone, paper or scissors: ");
    scanf("%19s", st); // No '&' needed because array names already act as addresses

    srand(time(0));
    y = (rand() % 3) + 1;

    switch (y) {
        case 1:
            z = "stone";
            break;
        case 2:
            z = "paper";
            break;
        case 3:
            z = "scissors";
            break;
    }

    printf("Computer chose: %s\n", z);

    // Using our custom function
    if (areStringsEqual(st, z)) {
        printf("It's a tie!\n");
    } else {
        printf("Not a tie.\n");
    }

    return 0;
}