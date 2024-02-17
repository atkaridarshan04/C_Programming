#include <stdio.h>

int findSmallest(int arr[], int size)
{
    int *j = arr;      // arr = arr[0]     // Initialize a pointer to the first element
    int smallest = *j; // Initialize smallest with the first element

    for (int i = 1; i < size; i++)
    {
        j++; // Move the pointer to the next element

        if (*j < smallest)
        {
            smallest = *j; // Update smallest if a smaller element is found
        }
    }
    return smallest;
}

int main()
{
    int arr[10];
    printf("Enter 10 integers:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    int smallest = findSmallest(arr, 10);
    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}
