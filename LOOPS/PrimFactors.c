#include <stdio.h>

// Function to obtain and print the prime factors of a number
void primeFactors(int n)
{
    // Start with the smallest prime number, which is 2
    int prime = 2;

    while (n > 1)
    {
        if (n % prime == 0)
        {
            printf("%d ", prime);
            n /= prime;
        }
        else
        {
            // If the current prime number is not a factor, increment it
            prime++;
        }
    }
}

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else
    {
        printf("Prime factors of %d are: ", num);
        primeFactors(num);
        printf("\n");
    }

    return 0;
}
