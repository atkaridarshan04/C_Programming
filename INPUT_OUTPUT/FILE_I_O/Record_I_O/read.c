// The best way of doing this is discusse in Text and Binary files
// The best way of doing this is by readding and writing in binary mode

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    FILE *ptr;
    struct emp
    {
        char name[40];
        int age;
        float bs;
    };
    struct emp e;
    ptr = fopen("Employee.dat", "r");

    if (ptr == NULL)
    {
        puts("Cannot open file");
        exit(1);
    }

    while (fscanf(ptr, "%s %d %f", e.name, &e.age, &e.bs) != EOF)
        printf("%s %d %.2f\n", e.name, e.age, e.bs);

    fclose(ptr);

    return 0;
}