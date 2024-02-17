#include <stdio.h>
#include <math.h>

int main()
{
    char c;

    printf("Enter any character: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z') // (c >= 45 && c <= 90) --> ASCII
    {
        printf("The entered character is a Capital Letter.");
    }
    else if (c >= 'a' && c <= 'z') // (c >= 97 && c <= 122) --> ASCII
    {
        printf("The entered character is a small case letter.");
    }
    else if (c >= '0' && c <= '9') // (c >= 48 && c <= 57) --> ASCII
    {
        printf("The entered character is a digit.");
    }
    else if ((c >= 0 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 127))
    {
        printf("The entered character is a special symbol.");
    }
    else
    {
        printf("The entered character do not fall in any category.");
    }

    return 0;
}