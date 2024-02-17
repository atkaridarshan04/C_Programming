// Compares two strings by ignoring the case

#include <stdio.h>

int myStrcmpi(char *str1, char *str2)
{
    char char1, char2;
    while (*str1 != '\0' && *str2 != '\0')
    {
        // Convert characters to lowercase for comparison
        if (*str1 >= 'A' && *str1 <= 'Z')
        {
            char1 = (*str1 + 32);   
        }
        else
        {
            char1 = *str1;
        }

        if (*str2 >= 'A' && *str2 <= 'Z')
        {
            char2 = (*str2 + 32);
        }
        else
        {
            char2 = *str2;
        }

        // Compare characters
        if (char1 != char2)
        {
            return char1 - char2;
        }

        str1++;
        str2++;
    }

    return *str1 - *str2;
}

int main()
{
    char str1[] = "HellO";
    char str2[] = "hElLo";

    int result = myStrcmpi(str1, str2);
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
