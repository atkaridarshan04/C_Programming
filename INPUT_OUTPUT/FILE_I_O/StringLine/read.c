#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char s[80];
    fp = fopen("POEM.TXT", "r");
    if (fp == NULL)
    {
        puts("Cannot open file");

        exit(1);
    }
    while (fgets(s, 79, fp) != NULL) // first is the address of string where it is stored , second is the length, and third is file pointer
    printf("%s", s);
    printf("\n");
    fclose(fp);

    return 0;
}