// Q.Define a function getint( ), which would receive a numeric string from the keyboard, convert it to an integer number and return the integer to the calling function. A sample usage of getint( ) is shown below

#include <stdio.h>
#include <stdlib.h>

int getint()
{
    char input[50]; // Assuming the input won't exceed 50 characters
    int number;

    printf("Enter a numeric string: ");
    fgets(input, sizeof(input), stdin);

    // Use strtol to convert the string to an integer
    number = strtol(input, NULL, 10);

    return number;
}

int main()
{
    int num = getint();
    printf("You entered: %d\n", num);

    return 0;
}
