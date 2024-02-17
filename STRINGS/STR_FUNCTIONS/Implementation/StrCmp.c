#include <stdio.h>

int myStrcmp(char *str1, char *str2)
{
    while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
    {
        str1++;
        str2++;
    }

    // Compare the ASCII values of the differing characters
    return (*str1 - *str2);
}

int main()
{
    char str1[] = "Raut";
    char str2[] = "Rao";

    int result = myStrcmp(str1, str2);
    printf("%d\n", result);

    if (result == 0)
    {
        printf("Strings are equal\n");
    }
    else
    {
        printf("Strings are not equal\n");
    }

    return 0;
}
