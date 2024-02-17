// We cannot take strings input from keyboard for array of pointer to strings directly, thus to overcome this we do the following

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *names[5], n[30], *p;
    int len, i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter Name: ");
        scanf("%s", &n);
        len = strlen(n);
        p = (char *)malloc(len + 1); // +1 for accommodating '\0'
        strcpy(p, n);
        names[i] = p;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", names[i]);
    }
    return 0;
}