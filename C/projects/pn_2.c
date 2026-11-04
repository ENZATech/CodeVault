#include <stdio.h>

int main() {
    long long target;
    // An array to act as our queue. 
    // (Size 100,000 is enough for small/medium numbers)
    long long queue[100000]; 
    int front = 0;
    int rear = 0;

    printf("Enter your number: ");
    scanf("%lld", &target);

    // Seed the queue with the first valid number
    queue[rear] = 1;
    rear++;

    while (front < rear) {
        // 1. Take the number at the front of the line
        long long current = queue[front];
        front++;

        // 2. Check if it is perfectly divisible by the target
        if (current % target == 0) {
            printf("The required number is: %lld\n", current);
            printf("The multiplier used was: %lld\n", current / target);
            return 0; // Exit immediately upon finding the shortest answer
        }

        // 3. Generate the next two valid numbers and put them at the back of the line
        // Prevent hardware overflow (long long maxes out at 19 digits)
        if (current <= 922337203685477580LL) { 
            queue[rear] = current * 10;         // Append '0'
            rear++;
            
            queue[rear] = (current * 10) + 1;   // Append '1'
            rear++;
        }
    }

    printf("Number is too large for 64-bit hardware limit.\n");
    return 0;
}