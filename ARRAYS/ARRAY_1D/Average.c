#include <stdio.h>

int main()
{
    float per, sum = 0;
    int marks[5];    // array declaration

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter Marks: ");
        scanf("%d", &marks[i]);     // storing data in array
    }

    for (int i = 0; i <= 4; i++)
    {
        sum += marks[i];    // reading data from an array
    }

    per = sum / 5;
    printf("%.2f", per);

    return 0;
}