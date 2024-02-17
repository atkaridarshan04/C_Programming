// An input string is valid if number of opening and closing brackets is same
// (irrespective of the sequence of opening and closing brackets)

#include <stdio.h>

int main()
{
    char s[50], *ptr;
    int count = 0;

    printf("Enter a String: ");
    scanf("%s", &s);

    ptr = &s[0];

    while (*ptr != '\0')
    {
        if (*ptr == '(' || *ptr == '[' || *ptr == '{')
        {
            count++;
        }
        else if (*ptr == ')' || *ptr == ']' || *ptr == '}')
        {
            count--;
        }
        ptr++;
    }

    if (count == 0)
    {
        printf("The string is valid\n");
    }
    else
    {
        printf("The string is invalid");
    }

    return 0;
}
