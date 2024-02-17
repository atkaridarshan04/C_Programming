#include <stdio.h>
#include <string.h>

int main()
{
    enum emp_dept
    {
        assembly,
        manufacturing,
        accounts,
        stores
    };
    enum emp_dept department;

    struct Employee
    {
        char name[25];
        int age;
        enum emp_dept department;
    };
    struct Employee e;

    strcpy(e.name, "John Nonam");
    e.age = 34;
    e.department = accounts;

    printf("Name = %s\n", e.name);
    printf("Age = %d\n", e.age);
    printf("Dept = %d\n", e.department);

    if (e.department == accounts)
        printf("%s is an accounant\n", e.name);
    else
        printf("%s is not an accounant\n", e.name);

    return 0;
}