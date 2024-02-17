#include <stdio.h>
#include <stdlib.h>

int *sumArrays(int *arr1, int *arr2, int size)
{
    int *result = (int *)malloc(size * sizeof(int));

    if (result == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    for (int i = 0; i < size; i++)
    {
        result[i] = arr1[i] + arr2[i];
    }

    return result;
}

void displayArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int *array1 = (int *)malloc(size * sizeof(int));
    int *array2 = (int *)malloc(size * sizeof(int));

    if (array1 == NULL || array2 == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    printf("Enter elements of the first array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter elements of the second array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array2[i]);
    }

    int *resultArray = sumArrays(array1, array2, size);

    printf("First array: ");
    displayArray(array1, size);

    printf("Second array: ");
    displayArray(array2, size);

    printf("Sum of arrays: ");
    displayArray(resultArray, size);

    free(array1);
    free(array2);
    free(resultArray);

    return 0;
}
