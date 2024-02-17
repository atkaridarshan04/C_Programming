#include <stdio.h>

// Function to convert a single digit to its Roman numeral
void digitToRoman(int digit, char one, char five, char ten)
{
    if (digit == 1)
    {
        printf("%c", one);
    }
    else if (digit == 4)
    {
        printf("%c%c", one, five);
    }
    else if (digit == 5)
    {
        printf("%c", five);
    }
    else if (digit == 9)
    {
        printf("%c%c", one, ten);
    }
    else if (digit > 5)
    {
        printf("%c", five);
        for (int i = 6; i <= digit; i++)
        {
            printf("%c", one);
        }
    }
    else
    {
        for (int i = 1; i <= digit; i++)
        {
            printf("%c", one);
        }
    }
}

// Function to convert a year to its Roman numeral equivalent
void yearToRoman(int year)
{
    if (year < 1 || year > 3999)
    {
        printf("Invalid year. Please enter a year between 1 and 3999.\n");
        return;
    }

    // Thousands place
    int thousands = year / 1000;
    year %= 1000;
    for (int i = 1; i <= thousands; i++)
    {
        printf("M");
    }

    // Hundreds place
    int hundreds = year / 100;
    year %= 100;
    digitToRoman(hundreds, 'C', 'D', 'M');

    // Tens place
    int tens = year / 10;
    year %= 10;
    digitToRoman(tens, 'X', 'L', 'C');

    // Ones place
    digitToRoman(year, 'I', 'V', 'X');
}

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    printf("Roman equivalent of %d is: ", year);
    yearToRoman(year);
    printf("\n");

    return 0;
}
