#include <stdio.h>

int main()
{
    int n;

    // Prompt the user to enter the number of elements in the list
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input. Please enter a positive number of elements.\n");
        return 1; // Exit with an error code
    }

    int i, number;
    int smallest, largest;

    // Prompt the user to enter the numbers and initialize smallest and largest
    printf("Enter the numbers:\n");
    scanf("%d", &number);
    smallest = largest = number;

    for (i = 1; i < n; i++)
    {
        scanf("%d", &number);

        // Check if the entered number is smaller or larger than the current smallest and largest
        if (number < smallest)
        {
            smallest = number;
        }
        if (number > largest)
        {
            largest = number;
        }
    }

    // Calculate and print the range
    int range = largest - smallest;
    printf("Range: %d\n", range);

    return 0;
}
