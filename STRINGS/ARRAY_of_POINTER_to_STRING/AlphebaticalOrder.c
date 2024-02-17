#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m;
    printf("Enter the number of names: ");
    scanf("%d", &m);

    char *names[m], n[25], *p;
    int i, j, len;

    for (i = 0; i < m; i++)
    {
        printf("Enter name %d:\n", i + 1);
        scanf("%s", n);
        len = strlen(n);
        p = (char *)malloc(len + 1);
        strcpy(p, n);
        names[i] = p;
    }

    printf("Original Strings\n");
    for (i = 0; i < m; i++)
    {
        printf("%s\n", names[i]);
    }

    // Bubble sort for string comparison
    for (i = 0; i < m - 1; i++)
    {
        for (j = 0; j < m - i - 1; j++)
        {
            if (strcmp(names[j], names[j + 1]) > 0)
            { // Use strcmp for string comparison
                char *temp;
                temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    printf("\nStrings in Alphabetical Order\n");
    for (i = 0; i < m; i++)
    {
        printf("%s\n", names[i]);
        free(names[i]); // Free the allocated memory for each name
    }

    return 0;
}
