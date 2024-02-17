// Works on Sorted + Unsorted arrays
// Time complexity is O(n)

#include <stdio.h>

int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {20, 36, 56, 12, 34, 77, 4, 24, 8, 99};
    
    int size = sizeof(arr) / sizeof(int), element = 34;

    int index = linearSearch(arr, element, size);
    printf("The element %d is found at index %d", element, index);

    return 0;
}