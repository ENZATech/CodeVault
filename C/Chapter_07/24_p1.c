#include <stdio.h>

int main() {
    int count = 0;

    printf("Possible combinations (Lemons, Toffees, Balloons):\n");
    printf("--------------------------------------------------\n");

    // Loop through all possible counts of Lemons (L) and Toffees (T)
    for (int l = 0; l <= 90; l++) {
        for (int t = 0; t <= 90 - l; t++) {
            int b = 90 - l - t; // Remaining items must be balloons

            // Check if the total cost matches Rs. 90 using integer arithmetic
            // (10*L + 12*T + 45*B == 2700 is equivalent to L/3 + 2T/5 + 3B/2 == 90)
            if (10 * l + 12 * t + 45 * b == 2700) {
                // Verify items are purchased in whole packets/units
                if (l % 3 == 0 && t % 5 == 0 && b % 2 == 0) {
                    count++;
                    int cost_l = l / 3;
                    int cost_t = (t / 5) * 2;
                    int cost_b = (b / 2) * 3;

                    printf("Possibility %d:\n", count);
                    printf("Lemons  : %2d items  -> Cost: Rs. %2d\n", l, cost_l);
                    printf("Toffees : %2d items  -> Cost: Rs. %2d\n", t, cost_t);
                    printf("Balloons: %2d items  -> Cost: Rs. %2d\n", b, cost_b);
                    // printf("Total   : %2d items  -> Rs. %2d\n\n", l + t + b, cost_l + cost_t + cost_b);
                }
            }
        }
    }

    if (count == 0) {
        printf("No valid combination found.\n");
    }

    return 0;
}