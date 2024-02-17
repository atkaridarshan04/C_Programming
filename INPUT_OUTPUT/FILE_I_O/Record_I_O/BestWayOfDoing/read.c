/* Reads records from binary file and displays them on screen */
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

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

    ptr = fopen("EMP.DAT", "rb");
    if (ptr == NULL)
    {
        puts("Cannot open file");
        exit(1);
    }

    while (fread(&e, sizeof(e), 1, ptr) == 1)
    {
        printf("%s %d %f\n", e.name, e.age, e.bs);
    }

    fclose(ptr);

    return 0;
}
