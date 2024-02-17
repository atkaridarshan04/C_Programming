// Accessing using POINTERS         // this is faster than above , thus we should prefer this
#include <stdio.h>

int main()
{
    int num[] = {24, 34, 12, 44, 56, 17};
    int *j;

    j = &num[0];

    for (int i=0; i <= 5; i++)
    {
        printf("The address is %d ", j);
        printf("The element is %d\n", *j);  // or *j = num[i]
        
        j++; //  increment pointer to point to next location

    }
       return 0;
}