#include <stdio.h>

void decimalToBinaryWithRecursion(int n)
{
    if (n > 0)
    {
        decimalToBinaryWithRecursion(n / 2);
        printf("%d", n % 2);
    }
}

int main()
{
    int decimalNumber;
    printf("Enter a positive integer: ");
    scanf("%d", &decimalNumber);

    if (decimalNumber < 0)
    {
        printf("Please enter a positive integer.\n");
    }
    else if (decimalNumber == 0)
    {
        printf("Binary equivalent: 0");
    }
    else
    {
        printf("Binary equivalent: ");
        decimalToBinaryWithRecursion(decimalNumber);
    }

    return 0;
}
