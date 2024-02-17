#include <stdio.h>

// Function to calculate the sum of digits using recursion
int rec(int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return num % 10 + rec(num / 10);
    }
}

// Function to calculate the sum of digits without recursion
int wrec(int num)
{
    int sum = 0;
    for (int i; num > 0;)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter a five digit number: ");
    scanf("%d", &num);

    if (num < 10000 && num > 99999)
    {
        printf("Enter a valid five digit number.");
    }
    else
    {
        printf("The sum of its digits is %d\n", rec(num));
        printf("The sum of its digits is %d\n", wrec(num));
    }

    return 0;
}