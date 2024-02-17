// Get does same work as scanf and put do same work as printf but in more cleaner way

#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];

    puts("Enter your name: ");
    gets(name);

    puts("Hello");
    puts(name);

    return 0;
}