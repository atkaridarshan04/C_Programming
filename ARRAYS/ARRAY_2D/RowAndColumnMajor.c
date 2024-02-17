#include <stdio.h>

int main()
{
    int arr[3][3];
    printf("Enter a 3x3 matrix: ");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Row Major\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("Column MAjor\n");
   for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}