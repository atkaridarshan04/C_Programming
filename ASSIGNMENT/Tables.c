#include <stdio.h>

int main()
{
    int n, a, i, j;

    printf("Enter the starting number: ");
    scanf("%d", &n);

    printf("Enter the number of tables: ");
    scanf("%d", &a);

    for (i = 1; i <= 10; i++)
    {
        for (j = 0; j <= a - 1; j++)
        {
            printf("%d \t", (n + j) * i);
        }
        printf("\n");
    }

    return 0;
}