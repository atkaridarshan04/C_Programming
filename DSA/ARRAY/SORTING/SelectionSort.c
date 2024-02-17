// time complexity - 0(n^2)
// Not stable and not adaptive

#include <stdio.h>

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selectionSort(int *arr, int n)
{
    int indexOfMin, temp;
    printf("Running Selection sort...\n");
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        // Swap arr[i] and arr[indexOfMin]
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
}

int main()
{
    int arr[] = {3, 5, 2, 13, 12};
    int n = sizeof(arr)/sizeof(int);
    
    printArray(arr, n);
    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}
