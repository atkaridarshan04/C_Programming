#include <stdio.h>

void printArr(int arr[30], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void myInsert(int arr[30], int size, int pos, int value)
{
    for (int i = size; i > pos - 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
}

int main()
{
    int arr[30] = {1, 2, 3, 4, 5, 9};
    int size = 6;
    int pos = 3;
    int value = 7;

    printArr(arr, size);
    printf("\n");
    myInsert(arr, size, pos, value);
    size++;

    printArr(arr, size);

    return 0;
}