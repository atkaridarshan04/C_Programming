#include <stdio.h>

int main()
{
    int n, n1;

    int j;
    while (j) // using infinite while loop to repeat
    {
        printf("\n\nMENUE:\n");
        printf("1. Calculate Factorial\n");
        printf("2. Calculate Sum of 1st n natural numbers\n");
        printf("3. Check if Prime\n");
        printf("4. Check if Odd or Even\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        scanf("%d", &n);

        switch (n)
        {
        case 1:
            printf("Enter the number: ");
            scanf("%d", &n1);

            int factorial = 1;
            for (int i = 1; i <= n1; i++)
            {
                factorial *= i;
            }
            printf("The factorial of %d is %d", n1, factorial);
            break;
            
        case 2:
            printf("Enter the number: ");
            scanf("%d", &n1);

            int sum = 0;
            for (int i = 0; i <= n1; i++)
            {
                sum += i;
            }
            printf("The sum of 1st %d natural no. is %d", n1, sum);
            break;

        case 3:
            printf("Enter the number: ");
            scanf("%d", &n1);

            int isprime = 1;
            for (int i = 2; i < n1; i++)
            {
                if (n1 % i == 0)
                {
                    isprime = 0;
                    break;
                }
            }
            if (isprime) // isprime != 0;
            {
                printf("The number %d is a prime number", n1);
            }
            else
            {
                printf("The number %d is not a prime number", n1);
            }
            break;

        case 4:
            printf("Enter the number: ");
            scanf("%d", &n1);

            if (n1 % 2 == 0)
            {
                printf("The no. %d is even.", n1);
            }
            else
            {
                printf("The no. %d is odd.", n1);
            }
            break;

        case 5:
            printf("Exicted !!");
            break;

        default:
            printf("Invalid choice. Please Enter a vaild choice.");
        }

        j++;

        if (n == 5)
        {
            break;
        }
    }

    return 0;
}