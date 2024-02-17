// Using Array of Pointer to strings

#include <stdio.h>

int main()
{
    char *name[] = {"Darshan",
                    "Devesh",
                    "Mitesh",
                    "Vedant",
                    "Aditya"};

    printf("Original = %s %s\n", name[2], name[3]);

    char *temp;
    temp = name[2];
    name[2] = name[3];
    name[3] = temp;

    printf("New = %s %s", name[2], name[3]);

    return 0;
}