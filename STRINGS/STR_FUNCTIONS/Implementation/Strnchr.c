// Sets first n characters of a string to a given character

#include <stdio.h>

char *myStrnset(char *ptr, char ch, int n)
{
    while (*ptr != '\0' && n > 0)
    {
        *ptr = ch;
        ptr++;
        n--;
    }

    return ptr;
}

int main()
{
    char str[] = "Hello, World!";
    char setChar = '*';
    int count = 5;

    myStrnset(str, setChar, count);

    printf("Modified String: %s\n", str);

    return 0;
}
