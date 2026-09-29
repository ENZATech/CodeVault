#include <stdbool.h>
#include <string.h>

bool sumGame(char* num) {
    int n = strlen(num);
    int half = n / 2;
    
    int sum_diff = 0;
    int q_diff = 0;
    for (int i = 0; i < half; i++) {
        if (num[i] == '?') {
            q_diff--;
        } else {
            sum_diff += (num[i] - '0');
        }
    }

    for (int i = half; i < n; i++) {
        if (num[i] == '?') {
            q_diff++;
        } else {
            sum_diff -= (num[i] - '0');
        }
    }
    return 2 * sum_diff != 9 * q_diff;
}

// To be continued...