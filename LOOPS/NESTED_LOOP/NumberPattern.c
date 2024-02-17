#include <stdio.h>
int main()
{
    int r = 4;
    for (int i = 0; i < r; i++)
    {
        for (int j = 5; j > i; j--)
        {
            printf("*");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", i + 1);
        }
        printf("\n");
    }

    return 0;
}