// This function appends the source string at the end of the target string

#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Darshan";
    char target[20] = "Hello";

    strcat(target, source);

    printf("source string = %s\n", source);
    printf("target string = %s\n", target);

    return 0;
}