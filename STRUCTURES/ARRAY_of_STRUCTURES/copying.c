#include <stdio.h>
#include <string.h>

int main()
{
    struct employee
    {
        char names[10];
        int age;
        float salary;
    };
    struct employee e1 = {"Darshan", 19, 2000.50};
    struct employee e2, e3;

    // Indirect copying
    strcpy(e2.names, e1.names); // e2.names = e1.names is wrong
    e2.age = e1.age;
    e2.salary = e1.salary;

    // Direct copying
    e3 = e2;

    printf("%s %d %.2f\n", e1.names, e1.age, e1.salary);
    printf("%s %d %.2f\n", e2.names, e2.age, e2.salary);
    printf("%s %d %.2f\n", e3.names, e3.age, e3.salary);

    return 0;
}