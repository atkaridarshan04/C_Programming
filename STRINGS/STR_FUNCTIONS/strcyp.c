// Use to copy the content of one string into another

#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Darshan";
    char target[20];

    strcpy(target, source);

    printf("Source string = %s\n", source);
    printf("Target string = %s\n", target);

    return 0;
}
