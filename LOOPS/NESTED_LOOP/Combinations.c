#include <stdio.h>

int main()
{
    // For all possible combinations of 1,2,3.
    int n = 3;
    printf("All possible combinations of 1,2 and 3 are.\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                printf("%d%d%d\n", i, j, k);
            }
        }
    }

    return 0;
}