#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, y1, x2, y2;
    printf("Enter the dimensions of matrix 1 : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the dimensions of matrix 2 : ");
    scanf("%d %d", &x2, &y2);

    if (x2 != y1)
    {
        printf("The matrices cannot be multiplied....");
    }
    else
    {
        int m1[x1][y1], m2[x2][y2], m3[x1][y2];

        for (int i = 0; i < x1; i++)
        {
            for (int j = 0; j < y2; j++)
            {
                m3[i][j] = 0;
            }
        }

        printf("Enter the elements of first matrix : \n");
        for (int i = 0; i < x1; i++)
        {
            for (int j = 0; j < y1; j++)
            {
                scanf("%d", &m1[i][j]);
            }
        }

        printf("The matrix 1 is : \n");
        for (int i = 0; i < x1; i++)
        {
            for (int j = 0; j < y1; j++)
            {
                printf("%d ", m1[i][j]);
            }
            printf("\n");
        }

        printf("Enter the elements of second matrix : \n");
        for (int i = 0; i < x2; i++)
        {
            for (int j = 0; j < y2; j++)
            {
                scanf("%d", &m2[i][j]);
            }
        }

        printf("The matrix 2 is : \n");
        for (int i = 0; i < x2; i++)
        {
            for (int j = 0; j < y2; j++)
            {
                printf("%d ", m2[i][j]);
            }
            printf("\n");
        }

        for (int i = 0; i < x2; i++)
        {
            for (int j = 0; j < y1; j++)
            {
                int sum = 0;

                for (int k = 0; k < x2; k++)
                {
                    sum += m1[i][k] * m2[k][j];
                }

                m3[i][j] = sum;
            }
        }

        printf("The result matrix is : \n");
        for (int i = 0; i < x1; i++)
        {
            for (int j = 0; j < y2; j++)
            {
                printf("%d ", m3[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}