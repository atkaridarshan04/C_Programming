#include <stdio.h>

int main()
{
    int *arr[4]; // Array of Integer Pointer.
    int i = 12, j = 18, k = 90, l = 76;
    arr[0] = &i;
    arr[1] = &j;
    arr[2] = &k;
    arr[3] = &l;

    for (int a = 0; a < 4; a++)
    {
        printf("%d ", *(arr[a]));
        // for printing address arr[a]
    }
    return 0;
}