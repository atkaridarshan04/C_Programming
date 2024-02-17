#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    printf("Enter the limit of array: ");
    scanf("%d", &n);

    int num[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d of array: ", i + 1);
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", num[i]);
    }

    int max = INT_MAX;
    int min = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (num[i] < max)
        {
            max = num[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] > min)
        {
            min = num[i];
        }
    }

    printf("\n");
    printf("Maximum number in array is: %d\n", min);
    printf("Minimum number in array is: %d\n", max);

    // Searching Particular Element in Array
    int fn;
    printf("Enter the number to find: ");
    scanf("%d", &fn);

    for (int i = 0; i < n; i++)
    {
        if (fn == num[i])
        {
            printf("The number %d is present in array", fn);
            break;
        }
    }

    return 0;
}
