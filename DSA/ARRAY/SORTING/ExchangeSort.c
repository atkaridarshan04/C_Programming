#include <stdio.h>

int main()
{
    int n = 6;
    int num[] = {12, 5, 1, 53, 2, 8};

    printf("Before Sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            if (num[j] < num[i])
            {
                int t = num[j];
                num[j] = num[i];
                num[i] = t;
            }
        }
    }

    printf("\nAfter Sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}