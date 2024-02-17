// Use to compare two strings.
//  When two strings are identical then strcmp returns 0
//  And when it is different it returns the difference betn ASCII values of 1st non matching
//  pair of character

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Jerry";
    char s2[] = "Ferry";
    int i, j, k;

    i = strcmp(s1, "Jerry");
    j = strcmp(s1, s2);
    k = strcmp(s1, "JerryBoy");

    printf("%d %d %d", i, j, k);

    return 0;
}