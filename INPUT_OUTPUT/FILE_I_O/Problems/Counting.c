/* Count chars, spaces, tabs and newlines in a file */

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    int nol = 0, not = 0, nob = 0, noc = 0;
    fp = fopen("Counting.txt", "r");

    while (1)
    {
        ch = fgetc(fp);

        if (ch == EOF)
            break;
        noc++;

        if (ch == ' ')
            nob++;

        if (ch == '\n')
            nol++;

        if (ch == '\t')
            not ++;

    }

    fclose(fp);

    printf("Number of characters = %d\n", noc);
    printf("Number of blanks = %d\n", nob);
    printf("Number of tabs = %d\n", not );
    printf("Number of lines = %d\n", nol);

    return 0;
}