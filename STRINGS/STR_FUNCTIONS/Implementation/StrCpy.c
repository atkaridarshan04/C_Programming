#include <stdio.h>

void myStrcpy(char *cpy, char *src)
{
    while (*src != '\0')
    {
        *cpy = *src;
        cpy++;
        src++;
    }
    *cpy = '\0';
}

int main()
{
    char src[] = "I am a good boy";
    char cpy[50];

    // strcpy(target, source);
    myStrcpy(cpy, src);

   printf("Copied String is : %s", cpy);

    return 0;
}