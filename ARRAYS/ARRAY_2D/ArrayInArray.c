// 2-D array is an array of arrays
#include <stdio.h>
int main()
{
    int s[4][2] = {
        {1234, 56},
        {1212, 33},
        {1434, 80},
        {1312, 78}};

    int i;
    for (i = 0; i <= 3; i++)
        printf("Address of %d th 1-D array = %d\n", i, s[i]);

    printf("Printing 2-D matrix");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", s[i][j]);
        }
        printf("\n");
    }
    
        
    return 0;
}