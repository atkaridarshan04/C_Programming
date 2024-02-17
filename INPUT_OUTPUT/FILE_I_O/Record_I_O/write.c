// The best way of doing this is discusse in Text and Binary files

#include <stdio.h>
#include <conio.h>
#include <conio.h>

int main()
{
    FILE *ptr;
    char another = 'Y';
    struct Employee
    {
        char name[30];
        int age;
        float salary;
    };
    struct Employee e;

    ptr = fopen("Employee.dat", "w");

    if (ptr == NULL)
    {
        printf("Cannot Open file.");
    }

    while (another == 'Y')
    {
        printf("\nEnter name , age and basic salary:\n");
        scanf("%s %d %f", &e.name, &e.age, &e.salary);
        fprintf(ptr, "%s %d %f", e.name, e.age, e.salary);

        printf("Enter another record (Y/N) :\n");
        fflush(stdin); // fflush flust out the buffer of the argument
        another = getche();
    }
    fclose(ptr);

    return 0;
}