#include <stdio.h>

int main()
{
    int matrix[5][5];
    int largest = 0; // Initialize the largest variable with a minimum value

    // Input the 5x5 matrix
    printf("Enter a 5x5 matrix:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);

            // Update the largest variable if a larger number is found
            if (matrix[i][j] > largest)
            {
                largest = matrix[i][j];
            }
        }
    }

    // Print the matrix
    printf("Entered Matrix:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the largest number
    printf("The largest number in the matrix is: %d\n", largest);

    return 0;
}
