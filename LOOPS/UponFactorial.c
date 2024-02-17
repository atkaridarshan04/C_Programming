// Question is printing the answer of 1/1! + 1/2! + 1/3! + ..........1/n!

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    float factorial = 1.0;
    float sum = 0.0;

    for (float i = 1.0; i <= n; i++)
    {
        factorial *= i;
        sum += 1 / factorial;
    }

    printf("%f", sum);
    
    return 0;
}
