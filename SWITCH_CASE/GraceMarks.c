#include <stdio.h>

int main()
{
    int class_obtained, subjects_failed;
    int grace_marks = 0;

    // Input class obtained and number of subjects failed
    printf("Enter the class obtained (1/2/3): ");
    scanf("%d", &class_obtained);
    
    printf("Enter the number of subjects failed: ");
    scanf("%d", &subjects_failed);

    // Calculate grace marks based on class and subjects failed
    switch (class_obtained)
    {
    case 1: // First Class
        if (subjects_failed <= 3)
        {
            grace_marks = subjects_failed * 5;
        }
        break;
    case 2: // Second Class
        if (subjects_failed <= 2)
        {
            grace_marks = subjects_failed * 4;
        }
        break;
    case 3: // Third Class
        if (subjects_failed <= 1)
        {
            grace_marks = subjects_failed * 5;
        }
        break;
    default:
        printf("Invalid class entered.\n");
        return 1; // Exit with an error code
    }

    // Display the calculated grace marks
    printf("Grace marks for the student: %d\n", grace_marks);

    return 0;
}
