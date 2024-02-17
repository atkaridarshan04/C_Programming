// If transpose of matric = original matric, then it is symmetric

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a the order of square matrix: ");
    scanf("%d", &n);

    int arr[n][n];
    int i, j;
    int issymmetric = 1;

    printf("Enter the elements of %dx%d matrix:\n", n, n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Your Entered Matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (arr[i][j] != arr[j][i])
            {
                issymmetric = 0;
                break;
            }
        }
        if (issymmetric == 0)
        break;
    }

    if (issymmetric != 0)
    {
        printf("Your Entered Matrix is Symmetric.");
    }
    else
        printf("Your Entered Matrix is Not Symmetric.");

    return 0;
}