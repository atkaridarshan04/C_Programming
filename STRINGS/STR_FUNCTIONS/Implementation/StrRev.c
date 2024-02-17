#include <stdio.h>
#include <string.h>

void myStrrev(char *str)
{
    int length = strlen(str);
    int startInd = 0;
    int endInd = length - 1;

    while (startInd < endInd)
    {
        // Swaping characters at start and end positions
        char temp = str[startInd];
        str[startInd] = str[endInd];
        str[endInd] = temp;

        startInd++;
        endInd--;
    }
}

int main()
{
    char str[] = "Hello World!";

    myStrrev(str);

    printf("%s\n", str);

    return 0;
}
