// Palindrome means a word, phrase, verse, or sentence that reads the same backward or forward.

#include <stdio.h>
#include <string.h>

int palindrome(char *ptr)
{
    int length = strlen(ptr);
    int start = 0;
    int end = length - 1;
    int flag = 0;

    while (start < end)
    {
        if (ptr[start] == ptr[end])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }

        start++;
        end--;
    }
    return flag;
}

int main()
{
    char s[50];

    printf("Enter a String: ");
    scanf("%s", s);

    // Test cases
    // Input - MADAM
    // Output - True

    // Input - CAR
    // Output - False

    if (palindrome(s) == 1)
    {
        printf("Yes! its a Palindrome.");
    }
    else
        printf("False");

    return 0;
}
