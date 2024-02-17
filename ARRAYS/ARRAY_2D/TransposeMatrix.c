#include <stdio.h>

int main()
{
    int arr[4][4];
    printf("Enter a 4x4 matrix: ");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Your Entered Matrix is:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("The transpose of given matrix is:\n");
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}