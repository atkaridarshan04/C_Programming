#include <stdio.h>

int myStrlen(char *c)
{
    int length = 0;
    while (*c != '\0')
    {
        length++;
        c++;
    }
    return length;
}

int main()
{
    char str[] = "I am a good Boy";

    printf("%d", myStrlen(str));

    return 0;
}