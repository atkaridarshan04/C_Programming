#include <stdio.h>

// Function to calculate the day of the week (0 = Sunday, 6 = Saturday)
int dayOfWeek(int year, int month, int day)
{
    if (month < 3)
    {
        month += 12;
        year--;
    }
    int h = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
    return h;
}

// Function to print the calendar for a given month and year
void printCalendar(int year, int month)
{
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *monthNames[] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    printf("\nCalendar for %s %d\n", monthNames[month], year);
    printf("Mon Tue Wed Thu Fri Sat Sun\n");

    int firstDay = dayOfWeek(year, month, 1);

    // Print leading spaces for the first day of the month
    for (int i = 0; i < firstDay; i++)
    {
        printf("    ");
    }

    int totalDays = daysInMonth[month];
    if (month == 2 && (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
    {
        totalDays = 29; // February has 29 days in a leap year
    }

    for (int day = 1; day <= totalDays; day++)
    {
        printf("%3d ", day);
        if ((firstDay + day) % 7 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
}

int main()
{
    int year, month;

    printf("Enter the year (e.g., 2023): ");
    scanf("%d", &year);
    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12)
    {
        printf("Invalid month entered.\n");
    }
    else
    {
        printCalendar(year, month);
    }

    return 0;
}
