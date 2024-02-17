// Q.Define a function getfloat( ), which would receive a numeric string from the keyboard, convert it to a float value and return the float to the calling function.

#include <stdio.h>
#include <stdlib.h>

float getfloat()
{
    char input[50]; // Assuming the input won't exceed 50 characters
    float number;

    printf("Enter a numeric string: ");
    fgets(input, sizeof(input), stdin);

    // Use strtof to convert the string to a float
    number = strtof(input, NULL);

    return number;
}

int main()
{
    float num = getfloat();
    printf("You entered: %f\n", num);

    return 0;
}
