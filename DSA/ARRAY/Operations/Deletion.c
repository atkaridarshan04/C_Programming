#include <stdio.h>

// Traversal -- it simply means visiting all the elements of an array
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

// deletion
void deletion(int arr[], int size, int index, int tota_size)
{
    if (index >= tota_size)
    {
        printf("Invalid Index");
    }

    for (int i = index; i <size ; i++)
    {
        arr[i] = arr[i + 1];
    }
    printf("Deletion Successful\n");
}

int main()
{
    int arr[30] = {1, 8, 16, 5, 47, 10};
    int size = 6, index = 3;
    // or int size = sizeof(arr)/sizeof(int);

    deletion(arr, size, index, 30);
    size--;
    display(arr, size);


    return 0;
}