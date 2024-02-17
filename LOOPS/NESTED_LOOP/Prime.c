#include <stdio.h>
int main()
{
    int n = 100;

    for (int i = 2; i <= n; i++)
    {
        int isprime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1)
        {
            if (i < 97)
                printf("%d, ", i);
            else if (i >= 97 && i < 100)
                printf("%d.", i);
        }
    }

    return 0;
}