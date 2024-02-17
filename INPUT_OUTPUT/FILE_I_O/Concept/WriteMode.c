#include <stdio.h>

int main()
{
    FILE *ptr;
    int num = 40;

    ptr = fopen("Wnum.txt", "w");
    fprintf(ptr, "Number is %d\n", num); // --> imp
    fprintf(ptr, "HELLO THERE", num);
    fclose(ptr);

    return 0;
}