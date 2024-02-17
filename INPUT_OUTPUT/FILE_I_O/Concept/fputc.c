// fputc is used to write one char in the file

#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("fputc.txt","w");
    fputc('D',ptr);
    fputc('A',ptr);
    fputc('R',ptr);
    fclose(ptr);

    return 0;
}