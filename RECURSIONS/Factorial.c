#include <stdio.h>

int factorial(int x);

int main()
{   
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("The factorial of number %d is %d", a, factorial(a));

    return 0;
}

int factorial(int x)
{                              // RECURSION MEANS FUNCTION KE ANDAR FUNCTION
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}