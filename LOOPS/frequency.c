#include <stdio.h>
#include <string.h>

void print_frequency(char *str)
{
    int count[256] = {0};
    int len = strlen(str);

    for (int i = 0; i < len; i++)
        count[str[i]]++;

    for (int i = 0; i < 256; i++)
        if (count[i] > 0)
            printf("Frequency of %c: %d\n", i, count[i]);
}

int main()
{
    char str[] = "This book is very good";
    print_frequency(str);
    return 0;
}
