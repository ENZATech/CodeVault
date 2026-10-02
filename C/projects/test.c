// Better version of calculator.
// #calc v2.0
#include<stdio.h>

int main(){
    double nums[100];
    char ops[100];
    int n_count = 0;
    int op_count = 0;

    printf("\n--- Welcome to calc v2.0 ---\n\n");
    printf("It can solve expressions like '10 + 2 * 6 / 3 - 1):' \n");
    printf("Enter your expression: ");

    if (scanf("%lf", &nums[n_count++]) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    // Read remaining operators and numbers until the user hits Enter (newline)
    char ch;
    while (scanf("%c", &ch) == 1 && ch != '\n') {
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            ops[op_count++] = ch;
            // Read the number following the operator
            scanf("%lf", &nums[n_count++]);
        }
    }

    // Resolve high-precedence operators (* and /)
    for (int i = 0; i < op_count; ) {
        if (ops[i] == '*' || ops[i] == '/') {
            if (ops[i] == '*') {
                nums[i] = nums[i] * nums[i + 1];
            } else {
                if (nums[i + 1] == 0) {
                    printf("\nError: Division by zero!\n");
                    return 1;
                }
                nums[i] = nums[i] / nums[i + 1];
            }

            // Shift numbers left to remove nums[i + 1]
            for (int j = i + 1; j < n_count - 1; j++) {
                nums[j] = nums[j + 1];
            }
            n_count--;

            // Shift operators left to remove ops[i]
            for (int j = i; j < op_count - 1; j++) {
                ops[j] = ops[j + 1];
            }
            op_count--;
            // Do not increment i; check the new operator shifted into index i
        } else {
            i++;
        }
    }

    // Resolve low-precedence operators (+ and -)
    for (int i = 0; i < op_count; ) {
        if (ops[i] == '+') {
            nums[i] = nums[i] + nums[i + 1];
        } else if (ops[i] == '-') {
            nums[i] = nums[i] - nums[i + 1];
        }

        // Shift numbers left
        for (int j = i + 1; j < n_count - 1; j++) {
            nums[j] = nums[j + 1];
        }
        n_count--;

        // Shift operators left
        for (int j = i; j < op_count - 1; j++) {
            ops[j] = ops[j + 1];
        }
        op_count--;
    }

    printf("Result = %.4g\n", nums[0]);

    return 0;
}