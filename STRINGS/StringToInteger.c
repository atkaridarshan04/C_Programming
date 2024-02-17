#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[] = "74";
    int num;

    // atoi is used to convert string to integer (i.e ASCII to Integer)
    num = atoi(str);

    printf("String: %s\n", str);
    printf("Integer: %d\n", num);

    return 0;
}