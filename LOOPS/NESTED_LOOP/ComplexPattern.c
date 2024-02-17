#include <stdio.h>

int main()
{
    int n;
    printf("Enter total number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                printf("*"); // replace * by i,j for another output
            }
            else
            {
                printf(" ");
            }
        }
        for (int j = n; j >= 1; j--)
        {
            if (j <= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}