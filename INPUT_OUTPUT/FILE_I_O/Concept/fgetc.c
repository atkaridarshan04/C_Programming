// fgetc is used to read one character from the file

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    fp = fopen("fgetc.txt", "r");
    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
            
        printf("%c", ch);
    }

    fclose(fp);
    
    return 0;
}
