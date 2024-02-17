#include <stdio.h>
#include <string.h>

struct Employee
{
    int empCode;
    char name[50];
    int joinYear;
};

int main()
{
    int currentYear, numEmployees;

    printf("Enter the current year: ");
    scanf("%d", &currentYear);

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    struct Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; i++)
    {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee Code: ");
        scanf("%d", &employees[i].empCode);
        printf("Name: ");
        scanf("%s", &employees[i].name);
        printf("Year of Joining: ");
        scanf("%d", &employees[i].joinYear);
    }

    printf("\nEmployees with a tenure of 3 years or more:\n");

    for (int i = 0; i < numEmployees; i++)
    {
        int tenure = currentYear - employees[i].joinYear;
        if (tenure >= 3)
        {
            printf("Employee Code: %d\n", employees[i].empCode);
            printf("Name: %s\n", employees[i].name);
            printf("Tenure: %d years\n", tenure);
            printf("\n");
        }
    }

    return 0;
}
