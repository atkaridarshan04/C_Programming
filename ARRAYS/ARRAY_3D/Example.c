#include <stdio.h>

int main()
{
    int arr[3][4][2] =
        {
            {
            {2, 4},
            {7, 8},
            {3, 4},
            {5, 6}},
            {
            {7, 6},
            {3, 4},
            {5, 3},
            {2, 3}},
            {
            {8, 9},
            {7, 2},
            {3, 4},
            {5, 1},
            }
        };
        
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d\n", arr[i][j][k]);
            }
        }
    }

    return 0;
}