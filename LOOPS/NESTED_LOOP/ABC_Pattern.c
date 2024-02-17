#include <stdio.h>

int main()
{
    int i, j;
    int n = 5;
    char ch;
    for (i = 1; i <= n; i++)
    {
        ch = 'A';
        for (j = 1; j <= i; j++)
        {
            printf("%c   ", ch++);
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        ch = 'A';
        for (j = 1; j <= i; j++)
        {
            printf("%c   ", ch++);
        }
        printf("\n");
    }
    return 0;
}
