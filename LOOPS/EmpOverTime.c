#include <stdio.h>
#include <math.h>

int main()
{
    int emp, workhrs, overtimehrs, i;
    float hourlyrate = 12.00, overtimepay;

    emp = 1;
    i = 1;
    while (emp <= 10, i <= 10)
    {
        printf("\nEmployee %d: enter the number of hours you worked: ", i);
        scanf("%d", &workhrs);

        overtimehrs = workhrs - 40;
        overtimepay = 12 * overtimehrs;

        if (overtimepay < 0)
        {
            printf("Overtime pay of Employee %d is rs.0\n", i);
        }
        else
        {
            printf("Overtime pay of Employee %d is rs.%f\n", i, overtimepay);
        }
        emp++, i++;
    }
    return 0;
}