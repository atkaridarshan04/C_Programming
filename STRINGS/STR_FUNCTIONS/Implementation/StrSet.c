// Use to set all character of a string to a given character

#include <stdio.h>

char *myStrset(char *ptr, char ch)
{
    while (*ptr != '\0')
    {
        *ptr = ch;
        ptr++;
    }

    return ptr;
}

int main()
{
    char str[] = "Hello, World!";
    char setChar = '*';

    myStrset(str, setChar);

    printf("%s\n", str);

    return 0;
}
