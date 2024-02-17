#include <stdio.h>
#include <math.h>

int main()
{
    int num, i, isprime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isprime = 0;
            break;
        }
    }
        if (isprime) // isprime != 0;
        {
            printf("The number %d is a prime number", num);
        }
        else
        {
            printf("The number %d is not a prime number", num);
        }
    

    return 0;
}