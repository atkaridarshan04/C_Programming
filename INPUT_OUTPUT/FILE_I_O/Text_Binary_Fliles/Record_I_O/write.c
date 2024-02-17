/* Receives records from keyboard and writes them to a file in binary
 mode */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    char another = 'Y';
    struct emp
    {
        char name[40];
        int age;
        float bs;
    };
    struct emp e;
    ptr = fopen("EMP.DAT", "wb");

    if (ptr == NULL)
    {
        puts("Cannot open file");
        exit(1);
    }

    while (another == 'Y')
    {
        printf("\nEnter name, age and basic salary: ");
        scanf("%s %d %f", e.name, &e.age, &e.bs);
        fwrite(&e, sizeof(e), 1, ptr);  // first argument is the adress , third is the number of structures we want at a time

        printf("Add another record (Y/N) ");
        fflush(stdin);
        another = getche();
    }
    fclose(ptr);

    return 0;
}