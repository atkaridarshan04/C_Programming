#include <stdio.h>

int main()
{
    int num, originalNum, reversed = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number for comparison later

    if (num < 10000 || num > 99999)
    {
        printf("Invalid input. Please enter a five-digit number.");
    }

    while (num > 0)
    {
        int rem = num % 10;
        reversed = reversed * 10 + rem;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    if (originalNum == reversed)
    {
        printf("The original and reversed numbers are equal.");
    }
    else
    {
        printf("The original and reversed numbers are not equal.");
    }

    return 0;
}
