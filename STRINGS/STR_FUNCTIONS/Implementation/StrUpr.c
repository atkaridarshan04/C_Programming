#include <stdio.h>

char *myStrupr(char *ptr)
{
    while (*ptr != '\0')
    {
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            *ptr = *ptr - 32;
        }
        ptr++;
    }

    return ptr;
}

int main()
{
    char str[] = "hello world!";

    myStrupr(str);

    printf("%s\n", str);

    return 0;
}
