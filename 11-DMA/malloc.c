#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int num;

    printf("Enter the number of integers you want storage for: ");
    scanf("%d", &num);

    ptr = (int *)malloc(num * sizeof(int));

    for (int i = 0; i < num; i++)
    {
        // printf("%d\n", ptr[i]);
        printf("Enter the value of %d element:", i + 1);
        scanf("%d", &ptr[i]);
        
    }

    printf("Elements are\n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}