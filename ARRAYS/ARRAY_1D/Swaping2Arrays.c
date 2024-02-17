// Write a c program for swapping of two arrays using call by value function.

#include <stdio.h>

void mySwap(int arr1[], int arr2[])
{

    for (int i = 0; i < 5; i++)
    {
        int t = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = t;
    }

    printf("\nArray 1\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nArray 2\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
}

int main()
{

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};

    printf("Array 1\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nArray 2\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("After Swaping\n");
    mySwap(arr1, arr2);

    return 0;
}
