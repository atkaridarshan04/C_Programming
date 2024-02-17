#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};
struct Date d;

int main()
{
    int dayInMon[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Enter the current Date: ");
    scanf("%d %d %d", &d.day, &d.month, &d.year);

    d.day += 45;

    while (d.day > dayInMon[d.month])
    {
        d.day -= dayInMon[d.month];
        d.month++;

        if (d.month > 12)
        {
            d.month = 1;
            d.year++;
        }
    }

    printf("Final date after adding 45 days: %02d/%02d/%02d\n", d.day, d.month, d.year);
    return 0;
}