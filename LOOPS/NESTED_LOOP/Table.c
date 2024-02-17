#include <stdio.h>

int main()
{
    int n, r;

    printf("Enter the starting number: ");
    scanf("%d", &n);

    printf("Enter the number of tables: ");
    scanf("%d", &r);

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }

    return 0;
}