#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(3 * sizeof(int));

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value of %d element:", i + 1);
        scanf("%d", &ptr[i]);
    }

    printf("Elements are\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Reallocating
    ptr = realloc(ptr, 5 * sizeof(3));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %d element:", i + 1);
        scanf("%d", &ptr[i]);
    }

    printf("Elements are\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}