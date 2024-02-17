// Write a C program to count the number of digits in an integer.
//  Then print addition of all digits in the given number.

#include <stdio.h>

int main() {
    int num, originalNum, digitCount = 0, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Save the original number for later use
    originalNum = num;

    // Count the number of digits
    while (num != 0) {
        num /= 10;
        ++digitCount;
    }

    // Reset num to the original value
    num = originalNum;

    // Calculate the sum of digits
    while (num != 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }

    // Display the results
    printf("Number of digits: %d\n", digitCount);
    printf("Sum of digits: %d\n", sum);

    return 0;
}
