#include <stdio.h>

char *myStrlwr(char *ptr)
{
    while (*ptr != '\0')
    {
        if (*ptr >= 'A' && *ptr <= 'Z')
        {
            *ptr = *ptr + 32;   // 32 = ('a' - 'A')
        }
        ptr++;
    }

    return ptr;
}

int main()
{
    char str[] = "HELLO WORLD!";

    myStrlwr(str);

    printf("%s\n", str);

    return 0;
}
