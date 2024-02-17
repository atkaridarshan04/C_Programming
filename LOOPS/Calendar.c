// Create a structure named Date having day, month and year as its elements. 
// Store the current date in the structure. Now add 45 days to the current date and display the final date.

#include <stdio.h>

// Define the Date structure
struct Date
{
    int day;
    int month;
    int year;
};

// Function to add days to a date
void addDays(struct Date *date, int days)
{
    // Array to store the number of days in each month
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Add days to the date
    date->day += days;

    // Adjust the month and year accordingly
    while (date->day > daysInMonth[date->month])
    {
        date->day -= daysInMonth[date->month];
        date->month++;

        if (date->month > 12)
        {
            date->month = 1;
            date->year++;
        }
    }
}

int main()
{
    // Create a Date structure and initialize it with the current date
    struct Date currentDate = {6, 3, 23}; // You can modify this with the actual current date

    // Add 45 days to the current date
    addDays(&currentDate, 45);

    // Display the final date
    printf("Input: %02d/%02d/%02d\n", currentDate.day, currentDate.month, currentDate.year);

    return 0;
}
