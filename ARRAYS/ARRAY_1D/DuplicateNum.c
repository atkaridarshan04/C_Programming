#include <stdio.h>

void findDuplicates(int arr[], int size)
{
    printf("Duplicate elements in the array are: ");

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            // Check if elements at indices i and j are equal (duplicate)
            if (arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break; // To avoid printing the same duplicate multiple times
            }
        }
    }
    printf("\n");
}

int main()
{
    int arr[100]= {1, 3, 4, 5, 3, 5};
    int size = 6;

    findDuplicates(arr, size);

    return 0;
}
