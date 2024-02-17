#include <stdio.h>

int main()
{
    FILE *ptr;
    int num1, num2;

    ptr = fopen("Rnum.txt", "r");

    if (ptr == NULL)
    {
        printf("The file does not exist.");
    }
    else
    {
        fscanf(ptr, "%d", &num1); // -->imp
        fscanf(ptr, "%d", &num2);
    }

    fclose(ptr);

    printf("Num1 = %d\n", num1);
    printf("Num2 = %d\n", num2);

    return 0;
}