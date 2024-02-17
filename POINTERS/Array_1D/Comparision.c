// Comparision of pointers using arrays

#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 36, 72, 45, 36};
    int *j, *k;
    
    j = &arr[4];
    k = (arr + 4);      // --> imp 

    printf("%d\n", k);
    printf("%d\n", j);

    if (j == k)
        printf("The two pointers point to the same location\n");
    else
        printf("The two pointers do not point to the same location\n");
        
    return 0;
}