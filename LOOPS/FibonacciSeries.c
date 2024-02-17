#include <stdio.h>

int main()
{

    int n, a = 0, b = 1, c;
    printf("Enter number of elements in series: ");
    scanf("%d", &n);

    if (n >= 1)
    {
        printf("%d ", a);
    }
    if (n >= 2)
    {
        printf("%d ", b);
    }

    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}
