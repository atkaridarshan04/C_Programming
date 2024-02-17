// counting the number of alphebets and number of digits in a string

#include <stdio.h>

int main()
{
    char s[50], *ptr;
    int alpC = 0, numC = 0;
    ptr = &s[0];
    printf("Enter a String: ");     // e.g = a11472oT56yU0
    scanf("%s", &s);

    while (*ptr != '\0')
    {
        if (*ptr >= '0' && *ptr <= '9')
        {
            numC++;
        }
        else if (*ptr >= 'A' && *ptr <= 'z')
        {
            alpC++;
        }
        ptr++;
    }

    printf("The count of alphabets in string are %d\n", alpC);
    printf("The count of numbers in string are %d", numC);

    return 0;
}



// OR

// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char inputString[100];
//     int alphabetsCount = 0, digitsCount = 0;

//     printf("Enter a string: ");
//     fgets(inputString, sizeof(inputString), stdin);

//     for (int i = 0; inputString[i] != '\0'; i++) {
//         // Check if the character is an alphabet
//         if (isalpha(inputString[i])) {
//             alphabetsCount++;
//         }
//         // Check if the character is a digit
//         else if (isdigit(inputString[i])) {
//             digitsCount++;
//         }
//     }

//     printf("Number of alphabets: %d\n", alphabetsCount);
//     printf("Number of digits: %d\n", digitsCount);

//     return 0;
// }
