// Perfect numbers are positive integers that can be expressed as the sum of their proper divisors,
// excluding the number itself

#include <stdio.h>

// Function to check if a number is perfect
int isPerfect(int num) {
    int sum = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

// Function to print perfect numbers in a given interval
void printPerfectNumbers(int lower, int upper) {
    printf("Perfect numbers between %d and %d are:\n", lower, upper);

    for (int i = lower; i <= upper; i++) {
        if (isPerfect(i)) {
            printf("%d, ", i);
        }
    }

    printf("\n");
}

int main() {
    int lower, upper;

    printf("Enter the lower limit: ");
    scanf("%d", &lower);

    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printPerfectNumbers(lower, upper);

    return 0;
}
