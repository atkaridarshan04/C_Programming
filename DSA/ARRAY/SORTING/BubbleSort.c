// Here Time Complxity is 0(n^2) - worst Case
// But for special case, for already sorted array it is 0(n) - Best Case
// By default it is not adpative but we can make it adaptive

#include <stdio.h>

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int *arr, int n)
{
    int isSorted = 0;    // for sorted array to make it adaptive
    for (int i = 0; i < n - 1; i++) // For number of passes
    {
        printf("Working on pass number %d\n", i + 1);
        isSorted = 1;

        for (int j = 0; j < n - i - 1; j++) // For comparison in each pass
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{
    // int arr[] = {12, 5, 2, 53, 1, 8};
    int arr[] = {1, 3, 6, 10, 15, 81};
    int n = 6;

    printArray(arr, n);
    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}



// By using While Loop

//     int i = 0, isSorted = 0;
//     while (i < n && isSorted == 0)
//     {
//         i++;
//         isSorted = 1; 
//         printf("Working on pass number %d\n", i + 1);
//         for (int j = 0; j < n - i; j++) 
//         {
//             if (num[j] > num[j + 1]) 
//             {
//                 int t = num[j];
//                 num[j] = num[j + 1];
//                 num[j + 1] = t;
//                 isSorted = 0;
//             }
//         }
//     }
